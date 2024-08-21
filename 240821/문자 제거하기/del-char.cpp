#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    cin>>str;
    int n;

    while(str.length()>1){
        cin>>n;
        
        if(n>=str.length()){
            str.erase(str.length()-1,1);
            
            break;
        }
        else{
            str.erase(n,1);
            
        }
        cout<<str<<endl;
    }
    cout<<str;
    return 0;
}