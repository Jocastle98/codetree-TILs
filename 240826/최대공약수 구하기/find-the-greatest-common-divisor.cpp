#include <iostream>
using namespace std;

void pr(int n,int m){
    int max;
    if(n>m){
        for(int i=1; i<=m; i++){
            
            if(n%i==0 and m%i==0){
                max=i;
            }
        }
    }
    else if(m>n){
        for(int i=1; i<=n; i++){
            
            if(m%i==0 and n%i==0){
                max=i;
                //cout<<i<<endl;
            }
        }
    }
    else{
        max = n;
    }
    cout<<max;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    cin>>a>>b;
    pr(a,b);
    return 0;
}