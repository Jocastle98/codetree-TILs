#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str ,s="";
    cin>>str;

    for(int i=0; i<str.length(); i++){
        if(('A'<=str[i] and str[i]<='Z') or ('a'<=str[i] and str[i]<='z') or isdigit(str[i]) !=0){
            if('A'<=str[i] and str[i]<='Z'){
                s +=(char)tolower(str[i]);
            }
            else{
                s+=str[i];
            }
            
        }
    }
    // for(int i=0; i<s.length(); i++){
    //     if('A'<=s[i] and s[i]<='Z'){
    //         (char)tolower(s[i]);
    //     }
    // }
    cout<<s;
    return 0;
}