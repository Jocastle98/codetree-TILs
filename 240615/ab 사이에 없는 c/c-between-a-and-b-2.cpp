#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,c;
    cin>>a>>b>>c;
    bool t = true;

    for(int i= a; i<=b; i++){
        if(i%c==0){
            t=false;
        }
    }
    if(t==true){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

    return 0;
}