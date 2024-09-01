#include <iostream>
#include <string>
using namespace std;

void str(int n){
    if(n==0){
        return;
    }
    str(n-1);
    cout<<"HelloWorld"<<endl;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    str(n);

    return 0;
}