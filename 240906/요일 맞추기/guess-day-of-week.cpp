#include <iostream>
#include <string>
using namespace std;

int mon(int a){
    if(a==2) return 28;
    if(a==1 or a==3 or a==5 or a==7 or a==8 or a==10 or a==12) return 31;
    return 30;
}

int main() {
    // 여기에 코드를 작성해주세요.
    string days[7] = {"Mon","Tue","Wed","Thu","Fri","Sat","Sun"};
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int day =0;
    if(a<c or (a==c and b<d)){
    while(!(a==c and b==d)){
        day++;
        b++;
        if(b>mon(a)){
            a++;
            b=1;
        }

    }
    }
    else{
        while(!(a==c and b==d)){
        day--;
    
        b--;
        if(b<1){
            a--;
            b=mon(a);
        }

    }
    }
    // 기준 요일인 월요일(days[0])로부터 날짜 차이를 계산해 요일을 구함
    int resultDay = (day % 7 + 7) % 7; // 음수 값을 방지하기 위해 +7을 하고 %7로 나눔
    cout << days[resultDay]; // 최종 요일 출력
    return 0;
}