#include <iostream>
using namespace std;
#define max 100

int arr[max];
int sum1(int &n ,int &m){
    int sum=0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    while(m>=1){
        sum +=arr[m-1];
        //cout<<arr[m-1]<<endl;
        if(m%2==0){
            m /=2;
        }
        else{
            m -=1;
        }

    }
    return sum;

}


int main() {
    // 여기에 코드를 작성해주세요.
    int n,m;
    cin>>n>>m;
    cout<<sum1(n,m);

    return 0;
}