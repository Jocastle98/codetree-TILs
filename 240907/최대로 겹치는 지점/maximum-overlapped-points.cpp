#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    int a,b;
    int arr[101]={};
    for(int i=0; i<n; i++){
        cin>>a>>b;
        for(int j=a; j<=b; j++){
            arr[j]++;
        }
    }
    int max=0;
    for(int i=0; i<100; i++){
        if(arr[i]>max){
            max =arr[i];
        }
    }
    cout<<max;
    return 0;
}