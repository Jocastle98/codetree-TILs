#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    int a,b,c;
    cin>>a>>b>>c;

    //조합
    int cnt =0;
    //i = a j=b c=k
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            for(int k=1; k<=n; k++){
                if(abs(a-i)>2 and abs(b-j)>2 and abs(c-k)>2){
                    cnt++;
                }
            }
        }
    }
    cout<<n*n*n - cnt;
    return 0;
}