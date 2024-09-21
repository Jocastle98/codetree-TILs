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
        else{
            if(InRange(x,y)){
                sum+=arr[x][y];
                x+=dx[dir];
                y+=dy[dir];
            }
            
        }
    }
    cout<<sum;
    return 0;
}