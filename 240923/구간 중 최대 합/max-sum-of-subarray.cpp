#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n,k;
    cin>>n>>k;
    int arr[100];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int ans =0;
    for(int i=0; i<=n-k; i++){
        int sum=0;
        for(int j=i; j<i+k; j++){
            sum +=arr[j];
        }   
        ans = max(ans , sum);
    }
    cout<<ans;
    return 0;
}