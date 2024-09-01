#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void reve(string &s){
    string a= s;
    reverse(a.begin(),a.end());
    if(s==a){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    cin>>str;
    reve(str);
    
    return 0;
}