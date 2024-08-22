#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    int n;
    cin>>n>>str;
    int cnt=0;
    for(int i=0; i<n; i++){
        string a;
        cin>>a;
        if(str==a){
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}