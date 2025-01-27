#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;
    int arr[n]={};
    int cnt=0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i]==2){
            cnt++;
        }
        if(cnt ==3){
            cout<<i+1;
            break;
        }
    }

    return 0;
}