#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Ground{
    public:
    string name,home,add;
    Ground(string name="",string add="" ,string home=""){
        this-> name =name;
        this-> add =add;
        this-> home =home;
    }

};

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    cin>>n;
    Ground grounds[n];
    for(int i=0; i<n; i++){
        string name,add,home;
        cin>>name>>add>>home;
        grounds[i] = Ground(name,add,home);
    }
   int maxIndex = 0;
    
    for (int i = 1; i < n; i++) {
        if (grounds[i].name > grounds[maxIndex].name) {
            maxIndex = i;  // 사전순으로 더 뒤에 있는 이름 발견
        }
    }
    
    // 결과 출력
    cout << "name " << grounds[maxIndex].name << endl;
    cout << "addr " << grounds[maxIndex].add << endl;
    cout << "city " << grounds[maxIndex].home << endl;
    return 0;
}