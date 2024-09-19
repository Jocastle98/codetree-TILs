#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int x=0,y=0;
    int dx[4]={};
    int dy[4]={};
    string a;
    cin>>a;
    if(a.find('L') != string::npos){
        if(a.find('F')!=string::npos){
            x -=1;
            y;
        }
        else{
            x;
            y;

        }
    }
    else if(a.find('R') !=string::npos){
        if(a.find('F')!=string::npos){
            x+=1;
            y;

        }
        else{
            x;
            y;

        }
    }
    cout<<x<<" "<<y;
    return 0;
}