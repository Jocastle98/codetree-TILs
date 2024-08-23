#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    for(int i=0; i<n*2; i++){
        if(i%2==0){
            for(int j=0; j<1+(i/2); j++){
                cout<<"* ";
            }
        }
        else{
            for(int k=0; k<n-(i-1)/2; k++){
                cout<<"* ";
            }
        }
        cout<<endl;
    }

    return 0;
}