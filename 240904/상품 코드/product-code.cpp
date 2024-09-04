#include <iostream>
#include <string>
using namespace std;

class Good{
    public:
        string n;
        int c;
        Good(string name="codetree",int code=50){
            this->n = name;
            this->c = code;
        }
};

int main() {
    // 여기에 코드를 작성해주세요.
    string a;
    int b;
    cin>>a>>b;
    Good goods = Good();
    
    cout<<"product "<<goods.c<<" is "<<goods.n<<endl;
    goods = Good(a,b);
    cout<<"product "<<goods.c<<" is "<<goods.n;
    return 0;
}