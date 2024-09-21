#include <iostream>
#include <string>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a;
    cin>>a;
    
    int max_num = INT_MIN;
    for(int i=0; i<(int)a.size(); i++){
        
        string b=a;
        if(a[i]=='0'){
            b[i]='1';
        }
        
        int num =0;
        for(int i=0; i<(int)b.size(); i++){
            num = num*2+(b[i]-'0');
        }
        
         max_num=max(max_num,num);
        

    }

    cout<<max_num;
    return 0;
}