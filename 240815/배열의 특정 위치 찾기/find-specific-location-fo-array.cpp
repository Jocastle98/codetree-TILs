#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10];

    int sum=0;
    int a, sum_3=0;
    for(int i=0; i<10; i++){
        cin>>arr[i];
    }

    for(int i=1; i<10; i +=2){
        sum +=arr[i];
    }
    for(int i=2; i<10; i +=3){
        sum_3 +=arr[i];
        a++;

    }

    cout<<fixed;
    cout.precision(1);
    cout<<sum<<" "<<float(sum_3)/a;
    return 0;
}