#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a,b,c;
    cin>>a>>b>>c;
    int stra = a.length();
    int strb = b.length();
    int strc = c.length();

    if(stra>=strb and strb>= strc){
        cout<<stra - strc;
    }
    else if(stra>=strc and strc>=strb){
        cout<<stra-strb;
    }
    else if(strb>=stra and stra>=strc){
        cout<<strb - strc;
    }
    else if(strb>=strc and strc >=stra){
        cout<<strb - stra;
    }
    else if(strc>=stra and stra>= strb){
        cout<<strc - strb;
    }
    else if(strc>= strb and strb>=stra){
        cout<<strc- stra;
    }
    

    return 0;
}