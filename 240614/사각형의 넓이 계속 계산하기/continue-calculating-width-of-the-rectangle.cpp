#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    char c;
    while(1){
        cin>>a>>b>>c;
        if(c=='C'){
            cout<<a*b<<endl;
            break;
        }
        
        cout<<a*b<<endl;
    }

    return 0;
}