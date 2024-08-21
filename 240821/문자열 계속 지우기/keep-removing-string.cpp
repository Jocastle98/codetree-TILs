#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a,b;
    cin>>a>>b;
    while(a.length()>0){
        if(a.find(b) != string::npos){
            a.erase(a.find(b),b.length());
        }
        else{
            break;
        }
    }
    cout<<a;
    return 0;
}