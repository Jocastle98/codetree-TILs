#include <iostream>
using namespace std;

int n;

// 범위 내에 있는지 확인하는 함수
bool InRange(int x, int y){
    return (0 <= x && x < n && 0 <= y && y < n);
}

int main(){
    // 빠른 입출력 설정
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n;
    int arr[101][101] = {0}; // n의 최대값이 100이므로 충분히 큰 배열 크기 설정
    
    // 방향 설정: 우, 상, 좌, 하
    int dx[4] = {0, -1, 0, 1};
    int dy[4] = {1, 0, -1, 0};
    
    int dir = 0; // 초기 방향: 우
    int x = n / 2, y = n / 2; // 중앙 위치
    arr[x][y] = 1; // 중앙에 1을 채움
    int cnt = 2; // 다음 채울 숫자
    int step = 1; // 초기 이동 단계
    
    while(cnt <= n * n){
        for(int k = 0; k < 2; k++){ // 두 번 방향을 변경하면서 이동
            for(int i = 0; i < step; i++){
                x += dx[dir];
                y += dy[dir];
                if(InRange(x, y)){
                    if(cnt > n * n) break; 
                    arr[x][y] = cnt++;
                    
                }
            }
            dir = (dir + 1) % 4; // 방향 회전
        }
        step++; // 이동 단계 증가 (step을 1씩 증가)
    }
    
    // 배열 출력
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << arr[i][j] << " ";
        }
        cout << '\n';
    }
    
    return 0;
}