#include <iostream>
using namespace std;
int n;

bool InRange(int x,int y){
    return(1<=x and x<=n and 1<=y and y<=n);
}
int main() {
    // 여기에 코드를 작성해주세요.
    int t;
    cin>>n>>t;

    int dx[4] = {-1,0,1,0};//상우하좌
    int dy[4] = {0,1,0,-1};
    int x,y,d; // r:행, c:열 , d :방향 
    cin>>x>>y>>d;
    int dir =0; //초기 방향
    if(d=='U'){
        dir =0;
    }
    else if(d=='D'){
        dir =2;
    }
    else if(d=='R'){
        dir =1;
    }
    else{
        dir =3;
    }
     while (t--) {
        int nx = x + dx[dir];
        int ny = y + dy[dir];

        bool reversed = false;

        if (!InRange(nx, ny)) {
            // 벽에 부딪혔을 때
            if (nx < 1 || nx > n) {
                // 상하 벽에 부딪힘
                if (dir == 0) dir = 2; // 상 -> 하
                else if (dir == 2) dir = 0; // 하 -> 상
            }
            if (ny < 1 || ny > n) {
                // 좌우 벽에 부딪힘
                if (dir == 1) dir = 3; // 우 -> 좌
                else if (dir == 3) dir = 1; // 좌 -> 우
            }
            reversed = true;
        }

        if (reversed) {
            // 방향만 바꾸고 위치는 그대로 (1초 소요)
            continue;
        } else {
            // 이동 가능하면 위치 업데이트
            x = nx;
            y = ny;
        }
    }
    cout<<x<<" "<<y;
    
    return 0;
}