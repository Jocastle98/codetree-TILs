#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str ,s="",a="";
    cin>>str;
    for(int i=0; i<str.length(); i++){
        if(isalpha(str[i]) !=0){
            s +=str[i];
            
        }
    }
    for(int i=0; i<s.length(); i++){
       a += (char)toupper(s[i]);
    }
    cout<<a;
    return 0;
}