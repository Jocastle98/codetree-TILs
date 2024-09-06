#include <iostream>
using namespace std;

int mon(int a) {
    if (a == 2) return 28; // 2월은 28일 (윤년이 아니므로)
    
    if (a == 4 || a == 6 || a == 9 || a == 11) 
        return 30; // 4, 6, 9, 11월은 30일
    
    return 31; // 나머지 달은 31일
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int day =1;
    
    while(true){
        if(a==c and b==d){
            break;
        }
        day++;
        b++;
        if(b>mon(a)){
            a++;
            b=1;
        }
    }
    cout<<day;
    return 0;
}