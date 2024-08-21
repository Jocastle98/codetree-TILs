#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str, a;
    cin>>str>>a;

    int k=-1;
    if(str.find(a) != string::npos){
        k= str.find(a);
    }
    cout<<k;

    return 0;
}