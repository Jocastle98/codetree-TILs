#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;

    char dir_num[4] = {'N','E','S','W'};

    int x=0, y=0;
    int nx,xy;
    for(int i=0; i<n; i++){
        char dir;
        int dis;
        cin>>dir>>dis;
        if(dir =='N'){
             y +=dis;
            
        }
        if(dir =='E'){
            x = x+dis;
            
        }
        if(dir =='S'){
            y -=dis;
        }
        if(dir =='W'){
            x -=dis;
        }
    }
    cout<<x<<" "<<y;
    return 0;
}