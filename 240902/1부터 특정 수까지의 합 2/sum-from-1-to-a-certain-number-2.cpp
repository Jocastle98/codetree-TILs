#include <iostream>
using namespace std;
int sum =0;
int sumnum(int n){
    if(n==0) return 0;
    sum +=n;
    sumnum(n-1);
    
    
    return sum;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    cout<<sumnum(n);
    return 0;
}