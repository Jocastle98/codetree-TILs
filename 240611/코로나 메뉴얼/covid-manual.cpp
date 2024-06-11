#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int a1,b1,c1;
    char a2,b2,c2;
    cin>>a2>>a1;
    cin>>b2>>b1;
    cin>>c2>>c1;
    
    if(a1>=37 and a2 =='Y'){
        if(b1>=37 and b2 == 'Y'){
            cout<<"E";
        }
        else if(c1>=37 and c2 == 'Y'){
            cout<<"E";
        }
        else{
            cout<<"N";
        }
    }
    else if(b1>=37 and b2 =='Y'){
        if(c1>=37 and c2 =='Y'){
            cout<<"E";
        }
    }
    else{
        cout<<"N";
    }

    return 0;
}