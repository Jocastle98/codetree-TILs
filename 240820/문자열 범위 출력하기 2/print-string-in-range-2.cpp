#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string arr;
    int n;
    cin>>arr;
    cin>>n;
    int len = arr.length();
    if(n>len){
        for(int i=len-1; i>=0; i--){
            cout<<arr[i];
        }
    }

    else{
        for(int i=len-1; i>=len-n; i--){
            cout<<arr[i];
        }
    }
    

   return 0;
}