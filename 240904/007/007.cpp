#include <iostream>
#include <string>

using namespace std;

class Spy{
    public:
        string c,h;
        int t;

        Spy(string code, string home, int time){
            this-> c= code;
            this ->h = home;
            this ->t = time;
        }
};

int main() {
    // 여기에 코드를 작성해주세요.
    int time;
    string code, home;
    cin>>code>>home>>time;
    //cout<<code<<home<<time;
    Spy spy = Spy(code,home,time);
    cout<<"secret code : "<<spy.c<<endl;
    cout<<"meeting point : "<<spy.h<<endl;
    cout<<"time : "<<spy.t;

    return 0;
}