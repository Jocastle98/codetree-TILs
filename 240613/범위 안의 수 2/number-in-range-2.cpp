#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    int sum=0;
    int count =0;
    for(int i=1; i<=10; i++){
        cin>>a;
        if(a>=0 and a<=200){
            sum +=a;
            count++;
        }
    }
    cout<<fixed;
    cout.precision(1);
    cout<<sum<<" "<<(double)sum/count;
    return 0;
}