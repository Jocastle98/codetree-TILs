#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    cin>>a;
    for(int i=1; i<=a; i++){
        if((i%2==0 and i%4 !=0) or ((i/8)%2==0) or ((i%7)<4)){
            continue;
        }
        cout<<i<<" ";
    }

    return 0;
}