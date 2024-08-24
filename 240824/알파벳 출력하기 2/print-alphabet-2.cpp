#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    char a ='A';
    for(int i=0; i<n; i++){
        for(int k=0; k<i; k++){
            cout<<"  ";
        }
        for(int j=0; j<n-i; j++){
            cout<<a<<" ";
            a++;
            if(a>'Z'){
                a='A';
            }
        }
        cout<<endl;
    }
    return 0;
}