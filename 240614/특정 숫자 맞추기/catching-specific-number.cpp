#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    while(1){
        cin>>a;
        if(a<25){
            cout<<"Higher"<<endl;
        }
        else if(a>25){
            cout<<"Lower"<<endl;
        }
        else{
            cout<<"Good"<<endl;
            break;
        }
    }
    
    return 0;
}