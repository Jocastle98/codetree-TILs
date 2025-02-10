#include <iostream>

using namespace std;

int n;

bool en(int n){
    int sum =0;
    if(n%2 ==0){
        sum += n/10;
        sum +=n%10;
        if(sum%5 ==0){
            return true;
        }
    }
    return false;
}

int main() {
    cin >> n;

    // Write your code here!

    if(en(n)){
        cout<<"Yes";
    }
    else cout<<"No";
    return 0;
}