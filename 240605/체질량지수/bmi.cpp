#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int h,w;
    cin>>h>>w;
    double b = 10000*w/(h*h);
    cout<<fixed;
    cout.precision(0);
    cout<<b<<endl;
    if(b>=25){
        cout<<"Obesity";
    }

    return 0;
}