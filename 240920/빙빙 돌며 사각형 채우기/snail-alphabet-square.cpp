#include <iostream>
using namespace std;
int n,m;
bool InRange(int x, int y){
    return (0<=x and x<n and 0<=y and y<m);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int x=0,y=0;
    cin>>n>>m;
    char arr[100][100]={0};
    int dx[4] ={0,1,0,-1};//우하좌상
    int dy[4] ={1,0,-1,0};
    int dir =0;
    for(int cnt=1; cnt<=n*m; cnt++){
        int nx = x+dx[dir];
        int ny = y+dy[dir];
        arr[x][y] = char(64+cnt);

        if(InRange(nx,ny) and arr[nx][ny] ==0){
            x=nx;
            y=ny;
        } 
        else{
            dir = (dir+1)%4;
            x+=dx[dir];
            y+=dy[dir];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}