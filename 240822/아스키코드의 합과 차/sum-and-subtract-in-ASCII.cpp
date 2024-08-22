#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    char a,b;
    cin>>a>>b;
    int A = int(a);
    int B = int(b);
    cout<<A+B<<" ";

    if(A>=B){
        cout<<A-B;
    }
    else{
        cout<<B-A;
    }
    return 0;
}