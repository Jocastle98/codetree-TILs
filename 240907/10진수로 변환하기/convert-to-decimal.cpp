#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    int num=0;
    int base=1;
    while(n>0){
        num+=(n%10)*base;
        base *=2;
        n /=10;
        
    }
    
    cout<<num;
    
    return 0;
}