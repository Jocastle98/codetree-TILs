#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    bool a =false;
    for(int i=2; i<n; i++){
        if(n%i==0){
            a=true;
        }
    }
    if(a==true){
        cout<<"C";
    }
    else{
        cout<<"N";
    }
    
    return 0;
}