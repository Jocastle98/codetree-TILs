#include <iostream>

using namespace std;

int a, b;

bool num(int i){
    int cnt =0;
    if(i<=1) return false;
    else{
        for(int c=1; c<=i; c++){
            if(i%c==0) cnt++;
        }
    }
    if(cnt ==2) return true;
    else return false;
}

int numsum(int a, int b){
    int sum=0;
    for(int i=a; i<=b; i++){
        if(num(i)) sum+=i;
    }
    return sum;
}

int main() {
    cin >> a >> b;

    // Write your code here!
    cout<<numsum(a,b);
    return 0;
}