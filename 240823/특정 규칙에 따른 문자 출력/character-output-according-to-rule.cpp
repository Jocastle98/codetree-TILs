#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        for(int j=n-i-1 ; j>0; j--){
            cout<<"  ";
        }
        for(int k=0; k<i+1; k++){
            cout<<"@ ";
        }
        cout<<endl;
    }
    for(int i=0; i<n-1; i++){
       
        for(int k=n-i-1; k>0; k--){
            cout<<"@ ";
        }
        cout<<endl;
    }
    
    return 0;
}