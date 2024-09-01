#include <iostream>
#include <string>
using namespace std;

string s;

int ind(string &str){
    for(int i=0; i<s.length(); i++){
        if(s.find(str) !=string::npos){
            return s.find(str);
            
        }
        else{
            return -1;
            
        }
    }
}


int main() {
    // 여기에 코드를 작성해주세요.
  
    string str;
    cin>>s>>str;
    cout<<ind(str);

    return 0;
}