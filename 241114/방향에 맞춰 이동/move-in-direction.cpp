#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    int x=0,y=0;
    int dx[4]={0,1,0,-1};//북동남서
    int dy[4]={1,0,-1,0};
    for(int i=0; i<n; i++){
        char dir;
        int dis;
        cin>>dir>>dis;
        if(dir =='N'){
            x+=dx[0]*dis;
            y+=dy[0]*dis;
        }
        else if(dir =='E'){
            x+=dx[1]*dis;
            y+=dy[1]*dis;
        }
        else if(dir=='S'){
            x+=dx[2]*dis;
            y+=dy[2]*dis;
        }
        else{
            x+=dx[3]*dis;
            y+=dy[3]*dis;
        }
        //cout<<dir<<endl;
       //cout<<x<<" "<<y<<endl;
    }
    cout<<x<<" "<<y;
    return 0;
}