#include <iostream>
#include <algorithm>
using namespace std;
#define max1 1000000
int main() {
    // 여기에 코드를 작성해주세요.
    int n,m;
    cin>>n>>m;
    int curA[max1 +1]={0}, curB[max1+1]={0};
    int timeA=1;
    for(int i=0; i<n; i++){
        int t;
        char d;
        cin>>t>>d;
        if(d=='L'){
            while(t--){
                curA[timeA] = curA[timeA-1] -1;
                timeA++;
            }
        }
        else{
            while(t--){
                curA[timeA] = curA[timeA-1]+1;
                timeA++;
            }
        }
        
    }
    int timeB=1;
    for(int i=0; i<m; i++){
        int t;
        char d;
        cin>>t>>d;
        if(d=='L'){
            while(t--){
                curB[timeB] = curB[timeB-1]-1;
                timeB++;
            }
        }
        else{
            while(t--){
                curB[timeB] = curB[timeB-1]+1;
                timeB++;
            }
        }
        
    }
    
    int cnt=0;
    int maxtime = max(timeA,timeB);
    // 움직임이 끝난 이후에도 마지막 위치를 유지하도록 설정
    for (int i = timeA; i < maxtime; i++) {
        curA[i] = curA[timeA - 1];
    }
    for (int i = timeB; i < maxtime; i++) {
        curB[i] = curB[timeB - 1];
    }
    for(int i=1; i<maxtime; i++){
        if(curA[i]==curB[i] and curA[i-1]!=curB[i-1]){
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}