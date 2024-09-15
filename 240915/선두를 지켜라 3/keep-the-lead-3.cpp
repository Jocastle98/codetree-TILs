#include <iostream>
#include <algorithm>
using namespace std;
#define max1 1000000
int main() {
    // 여기에 코드를 작성해주세요.
    int n,m;
    cin>>n>>m;
    int curA[max1+1]={0}, curB[max1+1]={0};
    int timeA = 1;

    for(int i=0; i<n; i++){
        int v,t;
        cin>>v>>t;
        while(t--){
            curA[timeA] = curA[timeA-1]+v;
            timeA++;
        }
    }
    int timeB =1;
    for(int i=0; i<m; i++){
        int v,t;
        cin>>v>>t;
        while(t--){
            curB[timeB] = curB[timeB-1]+v;
            timeB++;
        }
    }
    int cnt=0, pre =0;
    //pre는 이전선두
    for(int i=0; i<timeA; i++){
        int curL;//A선두 1, B선두 2 , 동일 선두 0
        if(curA[i]>curB[i]){
            curL=1;
        }
        else if(curA[i]<curB[i]){
            curL=2;
        }
        else{
            curL=0;
        }
        if(i>=1 and pre!=curL){
            cnt++;
        }
        pre = curL;
        
        
    }
    cout<<cnt;
    return 0;
}