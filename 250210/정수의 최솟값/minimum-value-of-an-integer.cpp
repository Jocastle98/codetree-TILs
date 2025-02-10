#include <iostream>

using namespace std;

int a, b, c;

int MinNum(int a, int b, int c){

    if(a>b){
        if(b>c){
            return c;
        }
        else{
            return b;
        }
    }
    else{
        if(a>c){
            return c;
        }   
        else{
            return a;
        }
    }
}

int main() {
    cin >> a >> b >> c;

    // Write your code here!

    cout<<MinNum(a,b,c);
    return 0;
}