#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    cin>>a>>b;
    bool t= false;
    for(int i=a; i<=b; i++){
        if(1920%i==0 and 2880%i==0){
            t=true;
        }
    }
    if(t==true){
        cout<<1;
    }
    else{
        cout<<0;
    }
    
    return 0;
}