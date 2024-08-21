#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    int q;
    cin>>str>>q;
    int len = str.length();
    for(int i=0; i<q; i++){
        int a;
        cin>>a;
        if(a==1){
            str = str.substr(1,len-1)+str.substr(0,1);
            cout<<str<<endl;
        }
        else if(a==2){
            str = str.substr(len-1,1)+str.substr(0,len-1);
            cout<<str<<endl;
        }
        else{
            reverse(str.begin(),str.end());
            cout<<str<<endl;
        }

    }
    return 0;
}