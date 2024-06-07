#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int a1,b1;
    string a2,b2;
    cin>>a1>>a2;
    cin>>b1>>b2;

    if((a2=="M" and a1>=19) or (b2=="M" or b1>=19)){
        cout<<1;
    }
    else{
        cout<<0;
    }
    

    return 0;
}