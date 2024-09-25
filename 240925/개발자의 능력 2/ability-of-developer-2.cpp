#include <iostream>
#include <algorithm>
#include <cmath>
#include <climits>
using namespace std;

int arr[6]={0};



int main() {
    // 여기에 코드를 작성해주세요.
    int total =0;
    for(int i=0; i<6; i++){
        cin>>arr[i];
        total+=arr[i];
    }

    int ans =INT_MAX;
    
    //배정을 위한 반복문
    for(int i=0; i<=5; i++){
        int dif;
        int sum3 =0;
        for(int j=i+1; j<=5; j++){
            for(int k=0; k<=5; k++ ){
                for(int l=k+1; l<=5; l++){
                    if(k == i || k == j || l == i || l == j)
						continue;
                    int sum1 = arr[i]+arr[j];
                    int sum2 = arr[k]+arr[l];
                    sum3 = total - (sum1+sum2);
                    int big = max(sum1,max(sum2,sum3));
                    int small = min(sum1,min(sum2,sum3));
                    dif = big-small;
                    ans = min(ans,dif);
                    
                }
            }
        }
    }
    cout<<ans;
    return 0;
}