#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    const int OFFSET = 100; 
    int arr[201] = {0}; 

    for(int i=0; i<n; i++){
        int a,b;
        cin>>a>>b;
        arr[a + OFFSET]++;     // 시작점에서 겹침을 +1
        arr[b - 1 + OFFSET]--; 

    }
    int max =0;
    int cur =0;
    for(int i=0; i<201; i++){
        cur +=arr[i];
        if(cur>max){
            max =cur;
        }
    }
    cout<<max;
    return 0;
}