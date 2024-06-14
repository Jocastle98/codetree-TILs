#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    int cnt=0;
    int sum =0;
    while(1){
        cin>>a;
        if(a>29 or a<20){
            break;
        }
        cnt++;
        sum +=a;

    }
    cout<<fixed;
    cout.precision(2);
    cout<<(double)sum/cnt;

    return 0;
}