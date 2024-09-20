#include <iostream>
using namespace std;
int n;
bool InRange(int x, int y){
    return (0<x and x<=n and 0<y and y<=n);
} 

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[101][101]={0};
    int m;
    int dx[4] = {-1,0,1,0};//상우하좌
    int dy[4] = {0,1,0,-1};
    cin>>n>>m;

    for(int i=0; i<m; i++){
        int x,y; //x: 행 y:열
        cin>>x>>y;
        int cnt =0;
        arr[x][y] =1;

        for(int j=0; j<4; j++){
            int nx = x+dx[j];
            int ny = y+ dy[j];
            if(InRange(nx,ny) and arr[nx][ny]==1){
                cnt++;
            }
        }
        if(cnt==3){
            cout<<1<<endl;
        }
        else{
            cout<<0<<endl;
        }
        

    }
    

    return 0;
}