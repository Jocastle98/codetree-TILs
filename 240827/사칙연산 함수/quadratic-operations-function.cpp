#include <iostream>
using namespace std;

int sum1(int a,int b){    
    return a+b;
}
int sub(int a,int b){
    return a-b;
}
int mul(int a, int b){
    return a*b;
}
int di(int a, int b){
    return a/b;
}


int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    char o;
    cin>>a>>o>>b;

    if(o=='+'){
        cout<<a<<" + "<<b<<" = "<<sum1(a,b);
    }
    else if(o=='-'){
        cout<<a<<" - "<<b<<" = "<<sub(a,b);
    }
    else if(o=='/'){
        cout<<a<<" / "<<b<<" = "<<di(a,b);
    }
    else if(o=='*'){
        cout<<a<<" * "<<b<<" = "<<mul(a,b);
    }
    else{
        cout<<"False";
    }
    return 0;
}