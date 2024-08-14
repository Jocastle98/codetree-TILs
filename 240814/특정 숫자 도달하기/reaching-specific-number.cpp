#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int sum=0;
    int a=0;

    for(int i=0; i<10; i++){
        cin>>arr[i];
        if(arr[i]>=250){
            break;
        }
        sum +=arr[i];
        a++;
    }
    cout<<fixed;
    cout.precision(1);
    cout<<sum<<" "<<float(sum)/a;
    return 0;
}