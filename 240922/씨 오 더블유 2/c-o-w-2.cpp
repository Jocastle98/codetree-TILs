#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    string a;
    cin>>a;
    int cnt =0; 
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            for(int k=j+1; k<n; k++){
                if(a[i]=='C' and a[j]=='O' and a[k]=='W') cnt++;
            }
        }
    }
    cout<<cnt;
    return 0;
}