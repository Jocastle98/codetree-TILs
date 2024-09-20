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
    for(int cnt =1; cnt<=n*n; cnt++){
        int nx= x+dx[dir];
        int ny = y+dy[dir];
        arr[x][y] = cnt;
        if(InRange(nx,ny) and arr[nx][ny]==0){
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
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}