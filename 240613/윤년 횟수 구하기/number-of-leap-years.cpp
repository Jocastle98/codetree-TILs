#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    int sum =0;
    for(int i=1; i<=n; i++){
        if(i%4==0){
            if((i%100!=0)){
                sum++;
            }
            if(i%400==0){
                sum++;
            }
        }
    }   
    cout<<sum;
    return 0;
}