#include <iostream>
using namespace std;

bool InRange(int x,int y,int &n){
    return (0<=x and x<n and 0<=y and y<n);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    
    int dx[4] ={0,1,0,-1}; //북,동,남,서
    int dy[4] ={1,0,-1,0};
    int arr[100][100];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    int result = 0; // 조건을 만족하는 격자의 수

    for (int x = 0; x < n; x++) {
        for (int y = 0; y < n; y++) {
            int cnt = 0; // 현재 위치에서 인접한 1의 개수
            for (int i = 0; i < 4; i++) {
                int nx = x + dx[i], ny = y + dy[i];
                if (InRange(nx, ny, n) && arr[ny][nx] == 1) {
                    cnt++;
                }
            }
            if (cnt >= 3) {
                result++;
            }
        }
    }

    cout << result << endl;

    
    return 0;
}