#include <iostream>

using namespace std;

int a;
int c;
char o;

int circul(int a, int c, char o){
    if(o=='+') return a+c;
    else if(o=='-') return a-c;
    else if(o=='/') return a/c;
    else if(o=='*') return a*c;
}

int main() {
    cin >> a >> o >> c;

    // Write your code here!
    
    if(o == '+'||o=='-'||o=='/'||o=='*')cout<<a<<" "<<o<<" "<<c<<" = "<<circul(a,c,o);
    else cout<<"False";
    return 0;
}