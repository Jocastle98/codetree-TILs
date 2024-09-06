#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,c;
    cin>>a>>b>>c;
    int d=11, e=11, f=11;
    int time=0;
    if(a<11 or (a==11 and b<11) or (a==11 and b==11 and c<11)){
        time =-1;
            
    }
    while(!(d==a and e==b and f==c)){
       
       
        time++;
        f++;
        if(f==60){
            e++;
            f=0;
        }
        if(e==24){
            d++;
            e=0;
        }
    }
    cout<<time;
    return 0;
}