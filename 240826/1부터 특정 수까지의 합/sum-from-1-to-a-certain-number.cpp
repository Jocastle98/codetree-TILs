#include <iostream>
using namespace std;

void ad(int n){
    
    int sum =0;
    for(int i=1; i<=n; i++ ){
        sum +=i;
    }
    cout<<sum/10;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;

    ad(n);
    return 0;
}