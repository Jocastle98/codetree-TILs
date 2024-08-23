#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
   
    for(int i=0; i<2*n; i++){
        if(i%2==0){
            for(int j=n-i/2; j>0; j--){
                cout<<"* ";
            }
        }
        else{
            for(int k=0; k<(i/2)+1 ; k++){
                cout<<"* ";
                 
            }
        }
        cout<<endl;
    }
    return 0;
}