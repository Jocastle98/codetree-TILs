#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    int cnt=1;
    for(int i=0; i<n; i++){
        for(int k=0; k<i; k++){
            cout<<"  ";
        }
        for(int j=1; j<=n-i; j++){
            if(cnt>9){
                cnt=1;
            }
            cout<<cnt<<" ";
            cnt++;
        }
        cout<<endl;
    }
    return 0;
}