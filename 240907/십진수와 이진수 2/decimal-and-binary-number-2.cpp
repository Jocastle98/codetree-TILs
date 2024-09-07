#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string n;
    cin>>n;
    int num=0;
    for(int i=0; i<(int)n.size(); i++){
        num = num*2 +(n[i] -'0');
        
    }
    num *=17;
    int arr[1000]= {};
    int cnt=0;
    while(num>0){
        if(num<2){
            arr[cnt++] = num;
            break;
        }
        arr[cnt++] = num%2;
        num /=2;
    }
    for(int i=cnt -1; i>=0; i--){
        cout<<arr[i];
    }
    return 0;
}