#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10];
    int sum_1=0, sum_2 =0;

    for(int i=0; i<10; i++){
        cin>>arr[i];
        if(i%2==0){
            sum_1 +=arr[i];
        }
        if(i%2==1){
            sum_2 +=arr[i];
        }
    }
    if(sum_2>=sum_1){
        cout<<sum_2-sum_1;
    }
    else{
        cout<<sum_1-sum_2;
    }
    return 0;
}