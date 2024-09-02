#include <iostream>
using namespace std;

int na(int n){
    if(n==1) return 1;
    if(n==2) return 1;

    return na(n-1) + na(n-2);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;

    cout<<na(n);
    return 0;
}