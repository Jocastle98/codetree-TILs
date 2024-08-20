#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n ,cnt=0, sum=0;
    cin>>n;
    string arr[10];

    for(int i=0; i<n; i++){
        cin>>arr[i];
       // cout<<arr[i]<<endl;
        if(arr[i][0]=='a'){
            cnt++;
        }
       sum+=arr[i].length(); 
    }
    cout<<sum<<" "<<cnt;
    return 0;
}