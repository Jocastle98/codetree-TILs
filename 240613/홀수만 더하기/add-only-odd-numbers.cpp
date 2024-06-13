#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    int a;
    int sum=0;
    for(int i=1; i<=n; i++){
        cin>>a;
        if((a%2==1) and (a%3==0)){
            sum +=a;
        }
    }
    cout<<sum;
    return 0;
}