#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    int cnt =0;
    for(int i=0; i<n; i++){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int sum =a+b+c+d;
        if(sum>=240){
            cout<<"pass"<<endl;
            cnt++;
        }
        else{
            cout<<"fail"<<endl;
        }


    }
    cout<<cnt;
    return 0;
}