#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    int num=0;
    int cnt=1;
    while(n>0){
        num=num*2+n%10;
        n /=10;
        cnt++;
    }
    cout<<num+cnt;
    return 0;
}