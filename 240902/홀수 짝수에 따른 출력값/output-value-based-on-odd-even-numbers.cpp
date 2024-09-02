#include <iostream>
using namespace std;
int sum =0;
int fuc(int n){
    if(n==1) return 1;
    if(n==2) return 2;

    if(n%2==0){
        return fuc(n-2) + n;
    }
    else{
        return fuc(n-2) +n;
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    cout<<fuc(n);
    return 0;
}