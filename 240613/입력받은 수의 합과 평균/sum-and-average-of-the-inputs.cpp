#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int sum=0;
    int cnt=0;
    cin>>n;
    int a;
    for(int i=1; i<=n; i++){
        cin>>a;
        sum+=a;
        cnt++;
    }
    cout<<fixed;
    cout.precision(1);
    cout<<sum<<" "<<(double)sum/cnt;
    return 0;
}