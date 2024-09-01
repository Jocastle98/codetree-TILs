#include <iostream>
#include <string>
using namespace std;

bool othe(string &s){
    
    char a = s[0];
    for(int i=1; i<=s.length()-1; i++){
        if(a !=s[i]){
            return true;
        }
        else{
            return false;
        }

    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    cin>>str;

    if(othe(str)){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}