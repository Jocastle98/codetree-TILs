#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    cin>>N;
    int x=0;
    int pr =1;
    while(1){
       
        if(N==pr){
            cout<<x;
            break;
        }
        x++;
        pr *=2; 
        

    }

    return 0;
}