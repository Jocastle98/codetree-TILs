#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    float arr[n];
    float sum =0;
    cout<<fixed;
    cout.precision(1);
    for(int i=0; i<n; i++){
        cin>>arr[i];
        sum += arr[i];
    
    }
        if(sum/n>=4.0){
            cout<<sum/n<<endl;
            cout<<"Perfect";
        }
        else if(sum/n>=3.0){
            cout<<sum/n<<endl;
            cout<<"Good";
        }
        else{
            cout<<sum/n<<endl;
            cout<<"Poor";
        }
    return 0;
}