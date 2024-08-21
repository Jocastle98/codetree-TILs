#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    string arr[10];
    string a ="";
    for(int i=0; i<n; i++){
        cin>>arr[i];
        a+=arr[i];
    }
    for(int i=0; i<a.length(); i++){
        if(i%5==0 and i !=0){
            cout<<endl;
        }
        cout<<a[i];
    }
    return 0;
}