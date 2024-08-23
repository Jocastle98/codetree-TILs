#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;

    for(int i=0; i<n;i++){
        for(int k=0; k<i; k++){
            cout<<"  ";
        }
        for(int j=2*n-1-2*i; j>0; j--){
                cout<<"* ";
        }
        cout<<endl;     
    }

    for(int i=0; i<n-1; i++){
        for(int j=n-i-2; j>0; j--){
            cout<<"  ";
        }
        for(int k=0; k<3+2*i; k++){
            cout<<"* ";
        }
        cout<<endl;

    }
    return 0;
}