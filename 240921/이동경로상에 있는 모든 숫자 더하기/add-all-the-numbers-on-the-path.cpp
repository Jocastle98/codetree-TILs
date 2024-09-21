#include <iostream>
#include <string>
using namespace std;
int n;
bool InRange(int x,int y){
    return (0<=x and x<n and 0<=y and y<n);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int t;
    cin>>n>>t;
    int x=n/2 ,y=n/2;
    int dx[4] ={-1,0,1,0};//북동남서
    int dy[4] ={0,1,0,-1};
    int dir= 0;
    string commands;
    cin>>commands;
    int arr[101][101] ={0};
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
            //cout<<arr[i][j]<<" ";
        }
        //cout<<endl;
    }
    int sum=arr[x][y];
    for(char command: commands){
        
        if(command=='L'){
            dir = (dir+3)%4;
        }
        else if(command=='R'){
            dir = (dir+1)%4;
        }
        else if (command == 'F') {
            // 현재 방향으로 한 칸 이동
            int nx = x + dx[dir];
            int ny = y + dy[dir];
            
            if (InRange(nx, ny)) {
                // 이동 가능한 범위 내라면
                x = nx;
                y = ny;
                sum += arr[x][y];  // 그 칸의 숫자를 더함
            }
        }
    }
    cout<<sum;
    return 0;
}