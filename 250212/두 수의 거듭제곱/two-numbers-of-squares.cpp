#include <iostream>

using namespace std;

int a, b;

void odd(int a, int b){
    int od =1;
    for(int i=0; i<b; i++){
        od *=a;
    }
    cout<<od;
}

int main() {
    cin >> a >> b;

    // Write your code here!
    odd(a,b);
    return 0;
}