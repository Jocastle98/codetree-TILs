#include <iostream>
using namespace std;

int fuc(int ad){
    if(ad<10) return ad;
    return fuc(ad/10)+(ad%10);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,c;
    cin>>a>>b>>c;
    int ad = a*b*c;
    cout<<fuc(ad);

    return 0;
}