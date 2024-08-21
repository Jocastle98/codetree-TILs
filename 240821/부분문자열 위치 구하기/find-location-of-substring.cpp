#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str, a;
    cin>>str>>a;

    int k=-1;
    for(int i=0; i<str.length()-1; i++){
        for(int j=0; j<a.length(); j++){
            if(str[i]==a[j] and str[i+1]==a[j+1]){
                k=i;
                break;
            }

        }
    }
    cout<<k;

    return 0;
}