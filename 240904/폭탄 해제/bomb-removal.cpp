#include <iostream>
#include <string>
using namespace std;

class A{
    public:
        string c,col;
        int t;
        A(string code,string color,int time){
            this-> c=code;
            this-> col =color;
            this-> t = time;
        }

};

int main() {
    // 여기에 코드를 작성해주세요.
    string a,b;
    int c;
    cin>>a>>b>>c;
    A bomb = A(a,b,c);
    cout<<"code : "<<bomb.c<<endl<<"color : "<<bomb.col<<endl<<"second : "<<bomb.t;
    return 0;
}