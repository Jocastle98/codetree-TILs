#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    int i=1;
    while(i<=3){
        cin>>a;
        if(a%2==1){
            continue;
        }
        else{
            cout<<a/2<<endl;
        }
        i++;

    }

    return 0;
}