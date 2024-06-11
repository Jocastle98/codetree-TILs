#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int a1,b1;
    char a2,b2;
    cin>>a1>>a2;
    cin>>b1>>b2;

    if((a1>=19 and a2 =='M' ) or (b1>=19 and b2 == 'M')){
        cout<<1;
    }
    else{
        cout<<0;
    }

    return 0;
}