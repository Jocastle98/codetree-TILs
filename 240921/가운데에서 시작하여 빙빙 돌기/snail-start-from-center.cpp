#include <iostream>
using namespace std;

int n;
int arr[100][100];  // 격자 저장용 배열

// 범위 내에 있는지 확인하는 함수
bool InRange(int x, int y) {
    return (0 <= x && x < n && 0 <= y && y < n);
}

int main() {
    // 격자의 크기 입력
    cin >> n;

    // 방향: 오른쪽(0), 위쪽(1), 왼쪽(2), 아래쪽(3)
    int dx[4] = {0, -1, 0, 1};  // 행 이동 (우, 상, 좌, 하)
    int dy[4] = {1, 0, -1, 0};  // 열 이동 (우, 상, 좌, 하)
    
    int dir = 0;      // 초기 방향은 오른쪽
    int x = n / 2;    // 시작 행 위치 (중앙)
    int y = n / 2;    // 시작 열 위치 (중앙)
    int steps = 1;    // 현재 이동할 칸의 수
    int cnt = 1;      // 채울 숫자

    arr[x][y] = cnt++;  // 시작 위치에 1을 채움

    while (cnt <= n * n) {
        // 두 번씩 반복해서 이동 (1번, 1번, 3번, 3번, 5번, 5번,...)
        for (int repeat = 0; repeat < 2; ++repeat) {
            // steps 만큼 이동
            for (int i = 0; i < steps; ++i) {
                x += dx[dir];  // x 좌표 이동
                y += dy[dir];  // y 좌표 이동

                if (InRange(x, y)) {
                    arr[x][y] = cnt++;  // 숫자 채우기
                }
            }
            dir = (dir + 1) % 4;  // 반시계 방향 회전
        }
        steps += 2;  // 이동 횟수 2씩 증가
    }

    // 달팽이 모양으로 채워진 배열 출력
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}