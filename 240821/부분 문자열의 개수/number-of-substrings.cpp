#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str, a;
    cin>>str>>a;

    int cnt =0;

    for(int i=0; i<str.length()-1; i++){
        if(str[i]==a[0] and str[i+1]==a[1]){
            cnt++;
        }
    }
    cout<<cnt;

    return 0;
}