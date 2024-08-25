#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    cin>>a>>b;
    
    int cnt=0;
    int sum=0;
    for(int i=a; i<=b; i++){
        for(int j=1; j<i; j++){
            if(i%j==0 and j!=i){
                sum +=j; 

                if(sum==i){
                    //cout<<sum<<endl;;
                    cnt++;
                }
            }
            
        }
    }
    if(cnt>0){
    cout<<cnt-1;
    }
    else{
        cout<<0;
    }

    return 0;
}