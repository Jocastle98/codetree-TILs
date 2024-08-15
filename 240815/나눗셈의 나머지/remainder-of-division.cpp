#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,k;
    cin>>a>>b;
    int arr[1000];
    arr[0]=a;
    int cnt[11]={};
    int sum=0;

    for(int i=0; i<1000; i++){
       
        arr[i+1]= arr[i]/b;
        
        if(arr[i]<=1){
            k=i;
            break;
        }
        cnt[arr[i]%b]++;
        cout<<arr[i]<<endl;
        
    }
    for(int i=0; i<k; i++){
        sum += cnt[i]*cnt[i];
    }
    cout<<sum;
    return 0;
}