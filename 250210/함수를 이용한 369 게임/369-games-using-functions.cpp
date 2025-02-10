#include <iostream>

using namespace std;

int a, b;

int cnt =0;

int num369(int a, int b){
    for(int i =a; i<=b; i++){
        if(i%3 ==0 || i/10 == 3 || i/10 == 6 || i/10 ==9 ||
        i%10 ==3 || i%10 ==6 || i% 10 ==9){
            cnt++;
        }
    }
    return cnt;
}

int main() {
    cin >> a >> b;

    // Write your code here!

    cout<<num369(a,b);
    return 0;
}