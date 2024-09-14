#include <iostream>
#include <algorithm>
using namespace std;
#define max1 1000000
int main() {
    // 여기에 코드를 작성해주세요.
    int n,m;
    cin>>n>>m;
    int curA[max1+1]={0}, curB[max1+1]={0};
    int timeA=1;
    for(int i=0; i<n; i++){
        int v,t;
        cin>>v>>t;
        while(t--){
            curA[timeA] = curA[timeA-1] + v;
            timeA++;
        }
    }
    int timeB=1;
    for(int i=0; i<m; i++){
        int v,t;
        cin>>v>>t;
        while(t--){
            curB[timeB] = curB[timeB-1] + v;
            timeB++;
        }

    }
    int cnt =0,ans =0;
    for(int i=1; i<timeA; i++){
        if(i>=1 and curA[i]>curB[i]){
            cnt++;
        }
        else{
            cnt =1;
        }
        ans = max(ans,cnt);
    }
    cout<<ans;
    return 0;
}