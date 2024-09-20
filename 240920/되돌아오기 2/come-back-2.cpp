#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string commands;
    cin>>commands;
    int x=0, y=0;
    int dx[4] ={0,1,0,-1};//북동남서
    int dy[4] ={1,0,-1,0};
    int dir =0;//북쪽 방향
    int t=0;
    for(char command:commands){
        t++;
        if(command =='L'){
            dir = (dir+3)%4;
        }
        else if(command=='R'){
            dir = (dir+1)%4;
        }
        else{
            x = x+dx[dir];
            y = y+dy[dir];
        }
        if(x==0 and y==0){
            cout<<t;
            return 0;
        }
    }
    cout<<-1;
    return 0;
}