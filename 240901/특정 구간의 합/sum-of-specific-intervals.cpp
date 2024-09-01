#include <iostream>
using namespace std;
#define max 100

int A[max];

void sumNum(int &n, int &m){
    
    for(int i=0; i<m; i++){
        int sum =0;
        
        int a1,a2;
        cin>>a1>>a2;
        //cout<<a1<<" "<<a2<<endl;
        for(int j=a1; j<=a2; j++){
            sum +=A[j-1];
            
        }
        cout<<sum<<endl;
        

    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n,m;
    cin>>n>>m;
    for(int i=0; i<n; i++){
        cin>>A[i];
    }
    sumNum(n,m);
    
    return 0;
}