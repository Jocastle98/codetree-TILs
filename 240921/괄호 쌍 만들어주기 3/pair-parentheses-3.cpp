#include <iostream>
#include <string>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string commands;
    cin>>commands;
    int len = commands.length();
    int cnt=0;
    for(int i=0; i<len; i++){
        for(int j=0; j<len; j++){
            if(commands[i]=='(' and i<j){
                if(commands[j]==')'){
                    cnt++;
                }
            }
        }
    }
    cout<<cnt;
    return 0;
}