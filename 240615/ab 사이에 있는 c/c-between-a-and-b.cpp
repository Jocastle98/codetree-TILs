#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,c;
    bool ak = false;
    cin>>a>>b>>c;

    for(int i=a; i<=b; i++){
        if(i%c){
            ak =true;
        }
        else{
            ak = false;
        }
        
    
    }
    if(ak==true){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

    return 0;
}