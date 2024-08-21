#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str,q;
    cin>>str>>q;
    int len = str.length();
    for(int i=0; i<q.length(); i++){
        if(q[i] =='L'){
            str = str.substr(1,len)+str.substr(0,1);
        }
        else{
            str = str.substr(len-1,1)+str.substr(0,len-1);
        }
    }
    cout<<str;
    return 0;
}