#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a;

    getline(cin,a);

    for(int i=3; i<=10; i++){
        cout<<a[i-1];
    }
    return 0;
}