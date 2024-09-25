#include <iostream>
#include <algorithm>
#include <climits>
#include <cmath>
using namespace std;

int arr[6]={0};


int main() {
    // 여기에 코드를 작성해주세요.
    int sum=0;
    for(int i=0; i<6; i++){
        cin>>arr[i]; //사람들의 능력
        sum+=arr[i];
    }
    int ans =INT_MAX;
    
    for(int i=0; i<6; i++){
        int dif;
        int sum1=0;
        
        for(int j=i+1; j<6; j++){
            for(int k=j+1; k<6; k++){
                int sum2 = arr[i]+arr[j]+arr[k];
                sum1 = sum-sum2;
                dif = abs(sum1-sum2);
                ans = min(ans , dif);
            }
        }
        
    }
    cout<<ans;
    return 0;
}