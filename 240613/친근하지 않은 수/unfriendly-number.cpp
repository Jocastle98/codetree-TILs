#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int sum =0;
    cin>>n;
    for(int i=1; i<=n; i++){
        if(i%2==0 or i%3==0 or i%5==0){
            continue;
        }
        sum++;
    }
    cout<<sum;
    return 0;
}