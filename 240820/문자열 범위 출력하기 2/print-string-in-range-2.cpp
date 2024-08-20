#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string arr;
    int n;
    cin>>arr;
    cin>>n;

    for(int i=arr.length()-1; i>=arr.length()-n; i--){
        cout<<arr[i];
    }
    return 0;
}