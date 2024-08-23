#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    cin>>a>>b;

    for(int i=1; i<=9; i++){
        if(b>=a){
            for(int j=a; j<=b; j++){
                cout<<j<<" * "<<i<<" = "<<j*i<<"  ";
            }
        }
        else{
            for(int j=b; j>=a; j--){
            cout<<j<<" * "<<i<<" = "<<j*i<<"  ";
            }
        }
        
        cout<<endl;
    }
    return 0;
}