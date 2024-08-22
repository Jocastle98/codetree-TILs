#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n ,sum=0;
    cin>>n;

    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        sum +=a;
    }
    string str = to_string(sum);

    str = str.substr(1,str.length()) + str.substr(0,1);
    if(str[0]=='0'){
        cout<<0<<stoi(str);
    }
    else{
        cout<<stoi(str);
    }
    return 0;
}