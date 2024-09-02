#include <iostream>
using namespace std;

void pri(int n){
    if(n==0) return;

    for(int i=n; i>=1; i--){
        cout<<i<<" ";
    }
    //pri(n-1);
    for(int i=1; i<=n; i++){
        cout<<i<<" ";
    }

}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    pri(n);
    return 0;
}