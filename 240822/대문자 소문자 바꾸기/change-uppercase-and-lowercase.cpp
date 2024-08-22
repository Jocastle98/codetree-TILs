#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str ,s="";
    cin>>str;

    for(int i=0; i<str.length(); i++){
        if('A'<=str[i] and str[i]<='Z'){
            s += tolower(str[i]);
        }
        else if('a'<=str[i] and str[i]<='z'){
            s+=toupper(str[i]);
        }
    }
    cout<<s;
    
    return 0;
}