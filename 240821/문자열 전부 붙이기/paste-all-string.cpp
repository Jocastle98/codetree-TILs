#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a[10];
    int n;
    cin>>n;
    string b ="";
    for(int i=0; i<n; i++){
        cin>>a[i];
        b +=a[i];
    }
    cout<<b;
    return 0;
}