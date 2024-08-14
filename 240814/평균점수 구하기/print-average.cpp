#include <iostream>
using namespace std;

int main() {
    float arr[8];
    float sum=0;
    for(int i=0; i<8; i++){
        cin>>arr[i];
        sum +=arr[i];
    }
    cout<<fixed;
    cout.precision(1);
    cout<<float(sum)/8;
    return 0;
}