#include <iostream>
using namespace std;
int cnt =0;
int fuc(int n){
    
    //cout<<cnt<<endl;
    if(n==1){
        
        return cnt; 
        
    }
    if(n%2==0){
        cnt++;
        return fuc(n/2);
    }
    else{
        cnt++;
        return fuc(n/3);
    }
    
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    cout<<fuc(n);
    return 0;
}