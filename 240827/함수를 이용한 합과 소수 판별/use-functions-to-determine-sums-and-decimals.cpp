#include <iostream>
using namespace std;

bool denum(int n){
    
    if(n<2){
        return false;
    }
    for(int i=2; i<n; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    cin>>a>>b;
    int cnt =0;
    for(int i=a; i<=b; i++){
        int sum =0;
        if(denum(i)){
            sum += i%10 + i/10;
            if(sum%2==0){
                cnt++;
            }
        }
    }
    cout<<cnt;
    
    return 0;
}