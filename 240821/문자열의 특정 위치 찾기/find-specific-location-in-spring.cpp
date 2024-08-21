#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    cin>>str;
    char a;
    cin>>a;
    int ind = -1;
    if(str.find(a) != string::npos){
        ind = str.find(a);
        
    }
    if(ind == -1){
        cout<<"No";
    }
    else{
        cout<<ind;
    }


    return 0;
}