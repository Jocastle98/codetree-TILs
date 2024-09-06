#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int time =0;

    while(true){
        if(a==c and b==d){
            break;
        }
        time++;
        b++;
        if(b==60){
            a++;
            b=0;
        }
    }
    cout<<time;
    return 0;
}