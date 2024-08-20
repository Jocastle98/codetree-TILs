#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str1, str2,a;

    getline(cin,str1);
    getline(cin,str2);

    for(int i=0; i<str1.length(); i++){
        if(str1[i]==' '){
            i++;
        }
        a +=str1[i];
    }
    for(int j=0; j<str2.length(); j++){
        if(str2[j]==' '){
            j++;
        }
        a+=str2[j];
    }
    cout<<a;
    return 0;
}