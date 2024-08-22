#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    cin>>str;
    int sum=0;
    for(int i=0; i<str.length(); i++){
        if('0'<=str[i] and str[i]<='9'){
            sum+=str[i]-'0';
        }
    }
    cout<<sum;
    return 0;
}