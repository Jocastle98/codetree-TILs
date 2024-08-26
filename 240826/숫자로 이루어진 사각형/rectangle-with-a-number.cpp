#include <iostream>
using namespace std;

void pr(int n){
    int cnt =0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cnt++;
            if(cnt>9){
                cnt=1;
            }
            cout<<cnt<<" ";
            
        }
        cout<<endl;
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    cin>>a;
    pr(a);
    return 0;
}