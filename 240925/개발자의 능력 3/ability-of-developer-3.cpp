#include <iostream>
#include <algorithm>
#include <climits>
#include <cmath>
using namespace std;
int arr[6]={0};
int dif(int i, int j, int k){
    int sum1 = arr[i]+arr[j]+ arr[k];
    int sum2=0;
    for(int i=0; i<6; i++){
        sum2+=arr[i];
    }
    sum2 -=sum1;
    return abs(sum1-sum2);
}

int main() {
    // 여기에 코드를 작성해주세요.
 
    for(int i=0; i<6; i++){
        cin>>arr[i]; //사람들의 능력
    }
    int ans =INT_MAX;
    
    for(int i=0; i<6; i++){
        for(int j=i+1; j<6; j++){
            for(int k=j+1; k<6; k++){
                ans = min(ans,dif(i,j,k));
            }
        }
        
    }
    cout<<ans;
    return 0;
}