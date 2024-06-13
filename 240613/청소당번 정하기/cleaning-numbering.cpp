#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int sum1=0,sum2=0,sum3=0;
    cin>>n;

    for(int i=1; i<n; i++ ){
        if((i%2==0) and (i%6 !=0)){
            sum1++;
        }
        else if((i%3 ==0) and (i%12 !=0)){
            sum2++;
        }
        else if(i%12==0){
            sum3 ++;
        }
    }
    cout<<sum1<<" "<<sum2<<" "<<sum3;
    return 0;
}