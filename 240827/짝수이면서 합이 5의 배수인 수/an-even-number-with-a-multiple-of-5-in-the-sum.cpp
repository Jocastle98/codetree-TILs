#include <iostream>
using namespace std;

int num(int n){
    return n%10+n/10;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;

    if(num(n)%5==0 and n%2==0){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}