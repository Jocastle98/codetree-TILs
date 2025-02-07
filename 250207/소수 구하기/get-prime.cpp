#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;
    for(int i=2; i<=n; i++){
       int cnt =0;
       for(int j=1; j<=n; j++){
            if(i%j==0){
                cnt++;
                if(j==i && cnt ==2){
                    cout<<j<<" ";
                }
            }
       }

    }
    return 0;
}