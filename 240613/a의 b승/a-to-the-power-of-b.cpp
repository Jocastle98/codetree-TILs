#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    int x =1;
    cin>>a>>b;
    for(int i=1; i<=b; i++){
        x *=a;
    }
    cout<<x;
    return 0;
}