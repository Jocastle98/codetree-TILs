#include <iostream>
#include <string>
using namespace std;

class Game{
    public:
        string id;
        int lev;
        Game(string id,int lev){
            this-> id =id;
            this-> lev = lev;
        }

};

int main() {
    // 여기에 코드를 작성해주세요.
    string a;
    int b;
    cin>>a>>b;

    Game game1 = Game("codetree",10);
    Game game2 = Game(a,b);


    cout<<"user "<<game1.id<<" lv "<<game1.lev<<endl;
    cout<<"user "<<game2.id<<" lv "<<game2.lev;

    return 0;
}