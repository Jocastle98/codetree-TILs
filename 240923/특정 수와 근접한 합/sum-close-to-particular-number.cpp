#include <iostream>
#include <cmath>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int s,n;
    cin>>n>>s;
    int arr[100]={0};
    int total=0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        total+=arr[i];
    }
    int ans =INT_MAX;
    
    for(int i=0; i<n; i++){       
        for(int j=i+1; j<n; j++){
            int sum = total - arr[i]- arr[j];
            int dif = abs(s-sum);
            ans = min(ans,dif);
        }
    }
    cout<<ans;
    return 0;
}