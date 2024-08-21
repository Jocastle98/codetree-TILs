#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str,s;
    cin>>str;
    int len = str.length();
    cout<<str<<endl;
    for(int i=0; i<len; i++){
        
        str = str.substr(len-1,1)+str.substr(0,len-1);
        cout<<str<<endl;
    }
    
    return 0;
}