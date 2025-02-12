#include <iostream>

using namespace std;

int y;

bool year4(int y){
    if(y%4 ==0){
        if(y%100 ==0 && y%400 !=0) return false;
        return true;
    }
    
    return false;
}

int main() {
    cin >> y;

    // Write your code here!
    if(year4(y)) cout<<"true";
    else cout<<"false";
    return 0;
}