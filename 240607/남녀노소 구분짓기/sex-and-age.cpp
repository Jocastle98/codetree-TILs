#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    cin>>a;
    cin>>b;
    if(b>=19){
        if(a==0){
            cout<<"MAN";
        }
        else{
            cout<<"WOMAN";
        }
    }
    else{
        if(a==0){
            cout<<"BOY";
        }
        else{
            cout<<"GIRL";
        }
    }

   
    

    return 0;
}