#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a,b,a1="",b1="";
    cin>>a>>b;
    int sum1=0,sum2=0;
    for(int i=0; i<a.length(); i++){
        if(!isdigit(a[i])){
            break;
        }
        else{
            a1 +=a[i];
            
        }
        
    }
    for(int i=0; i<b.length(); i++){
        if(!isdigit(b[i])){
           break;
        }
        else{
            b1 +=b[i];
        }
       
    }
    cout<<stoi(a1)+stoi(b1);
    return 0;
}