#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    cin>>a>>b;
    int sum=0;
    int count =0;
    for(int i=a; i<=b; i++){
        if((i%5==0) or (i%7==0)){
            sum +=i;
            count++;
        }
    }
    cout<<fixed;
    cout.precision(1);
    cout<<sum<<" "<<(float)sum/count;
    return 0;
}