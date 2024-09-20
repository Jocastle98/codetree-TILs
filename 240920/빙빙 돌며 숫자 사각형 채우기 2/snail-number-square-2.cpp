#include <iostream>
using namespace std;
int n,m;
bool InRange(int x, int y){
    return (0<=x and x<n and 0<=y and y<m);
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n>>m;
    int dx[4] ={1,0,-1,0};//하우상좌
    int dy[4] ={0,1,0,-1};
    int dir =0; //초기방향 아래
    int arr[100][100]={0};
    int x=0,y=0;
    
 
    for(int cnt=1; cnt<=n*m; cnt++){
        arr[x][y]=cnt;
        int nx = x+dx[dir];
        int ny = y+dy[dir];
        
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