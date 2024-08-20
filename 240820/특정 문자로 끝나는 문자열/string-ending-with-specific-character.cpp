#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string arr[10];
    char a;
    int k=0;
    for(int i=0; i<10; i++){
        cin>>arr[i];
    }
    cin>>a;

    for(int i=0; i<10; i++){
        if(arr[i][arr[i].length()-1]==a){
            cout<<arr[i]<<endl;
            k++;
        }
        
        
    }
    if(k==0){
        cout<<"None";
    }
    return 0;
}