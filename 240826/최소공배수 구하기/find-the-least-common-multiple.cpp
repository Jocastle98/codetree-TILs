#include <iostream>
#include <algorithm>
using namespace std;

void va(int n,int m){
    int k;
    for(int i=1; i<=max(n,m); i++){
        if(n*i%m==0){
            k=i*n;
            break;
        }
        
        else if(m*i%n==0){
            k=i*m;
            break;
        }
    }
    cout<<k;

}

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    cin>>a>>b;
    va(a,b);
    return 0;
}