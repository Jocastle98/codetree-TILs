#include <iostream>

using namespace std;

int a, b;

bool numa(int i){
    for(int c=2; c<i; c++){
        if(i%c ==0) return false;
    }
    return true;
}

bool numb(int d){
    return ((d/10 + d%10)%2 ==0)? true: false;
}

int main() {
    cin >> a >> b;

    // Write your code here!
    int cnt =0;
    for(int i=a; i<=b; i++){
        if(numa(i) && numb(i)){
            cnt++;
        }
    }
    cout<<cnt;

    return 0;
}