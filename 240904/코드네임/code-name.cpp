#include <iostream>
#include <string>
using namespace std;

class Spy{
    public:
        string name;
        int score;
    
        Spy(string name="", int score=0){
            this->name =name;
            this->score =score;
        }
};


int main() {
    // 여기에 코드를 작성해주세요.
    Spy spys[5];
    
    int k=0;
    for(int i=0; i<5; i++){
        string name;
        int score;
        cin>>name>>score;
        spys[i] = Spy(name,score);
        int min=spys[0].score;
        if(spys[i].score<min){
            k=i;
        }

    }
    cout<<spys[k].name<<" "<<spys[k].score;

    return 0;
}