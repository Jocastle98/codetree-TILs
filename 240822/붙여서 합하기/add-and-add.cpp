#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a,b;
    cin>>a>>b;
    int ab = stoi(a+b)+stoi(b+a);
  
    cout<<ab;
    

    return 0;
}