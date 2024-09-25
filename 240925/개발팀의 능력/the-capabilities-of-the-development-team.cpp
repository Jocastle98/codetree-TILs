#include <iostream>
#include <algorithm>
#include <climits>
#include <cmath>
using namespace std;

int arr[5] ={0};

int main() {
    // 여기에 코드를 작성해주세요.
    int total=0;
    for(int i=0; i<5; i++) {
        cin>>arr[i];
        total +=arr[i];
        }
        
    bool found = false;
    int ans =INT_MAX;

    for(int i=0; i<5; i++){
        int sum3=0; //하나 남은 사람
        int dif;
        for(int j=i+1; j<5; j++){
            for(int k=0; k<5; k++){
                for(int l=k+1; l<5; l++){
                    if(i==k or i==l or j==k or j==l) continue;
                    
                    int sum1 = arr[i]+arr[j];
                    int sum2 = arr[k]+arr[l];
                    sum3 = total -sum1-sum2;
                    if(sum1 !=sum2 and sum2 != sum3 and sum1 !=sum3){
                        int big = max(sum1,max(sum2,sum3));
                        int small =min(sum1,min(sum2,sum3));
                        dif = big-small;
                        ans = min(ans,dif);
                        found = true;
                    }
                    
                    
                }
            }
        }
    }
    
    if(found) cout<<ans;
    else cout<<-1;
    return 0;
}