#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int day =1;
    int num[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    while(true){
        if(a==c and b==d){
            break;
        }
        day++;
        b++;
        if(b>num[a]){
            a++;
            b=1;
        }
    }
    cout<<day;
    return 0;
}