#include <iostream>
using namespace std;
int n;
bool InRange(int x,int y){
    return (0<=x and x<n and 0<=y and y<n);
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n;
    int arr[100][100]={0};
    int dx[4] ={0,-1,0,1};//우상좌하
    int dy[4] ={1,0,-1,0};
    int dir =0;
    int x= n/2, y=n/2;
     int steps = 1;
    for(int cnt =1; cnt<=n*n; cnt++){
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
        steps += 2;
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}