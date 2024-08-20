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
    if(stra> strb){
        if(stra>strc){
            cout<<stra-strb;
        }
        else{
            cout<<strc - strb;
        }
    }
    else if(strb>stra){
        if(strb>strc){
            cout<<strb - stra;
        }
        else{
            cout<<strc- stra;
        }
    }


    return 0;
}