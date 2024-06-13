#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    int sum3 =0;
    int sum5=0;

    for(int i=1; i<=10; i++){
        cin>>a;
        if(a%3==0){
            sum3++;
        }
        if(a%5==0){
            sum5++;
        }
    }
    cout<<sum3<<" "<<sum5;

    return 0;
}