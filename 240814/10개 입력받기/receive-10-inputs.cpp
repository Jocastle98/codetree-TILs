#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10];
    int a=0,sum=0;

    for(int i=0; i<10; i++){
        cin>>arr[i];
        if(arr[i]==0){
            break;
        }
        sum += arr[i];
        a++;
    }
    cout<<fixed;
    cout.precision(1);
    cout<<sum<<" "<<float(sum)/a;
    return 0;
}