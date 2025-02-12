#include <iostream>

using namespace std;

int a, b;
bool ab(int i){
    if(i%2 ==0) return false;
    if(i%10 ==5) return false;
    if(i%3 ==0 && i%9 !=0) return false;
    return true;
}

int num(int a, int b){
    int cnt =0;
    for(int i=a; i<=b; i++){
        if(ab(i)) cnt++;
    }
    return cnt;
}

int main() {
    cin >> a >> b;

    // Write your code here!
    cout<<num(a,b);
    return 0;
}