#include <iostream>
#include <algorithm>
using namespace std;



int main() {
    int n,k;
    cin>>n>>k;
    int arr[10001]={0};
    for(int i=0; i<n; i++){
        int a;
        char b;
        cin>>a>>b;
        if(b=='G'){
            arr[a] =1;
        }
        else{
            arr[a] =2;
        }
    }
    int ans =0;
    for(int i=0; i<=10000-k; i++){
        int sum=0;
        for(int j=i; j<=k+i; j++){
            sum+=arr[j];
        }
        ans = max(ans ,sum);
    }
    cout<<ans;
   
    return 0;
}