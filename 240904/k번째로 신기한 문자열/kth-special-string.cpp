#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n,k;
    string t;
    cin>>n>>k>>t;
    string arr[n];
    string str[n];
    int cnt=0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i].find(t) !=string::npos){
            cnt++;
            str[i] +=arr[i];
        }
    }
    
    sort(str,str+cnt);

    cout<<str[k-1];


    return 0;
}