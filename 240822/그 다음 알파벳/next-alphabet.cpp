#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    char a;
    cin>>a;

    if(char(int(a))=='z'){
        cout<<'a';
    }
    else{
         cout<<char(int(a)+1);
   
    }
    return 0;
}