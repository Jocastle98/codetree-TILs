#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



int main() {
    

    // Write your code here!
    int n;
    cin>>n;
    int arr[n] ={};
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        arr[a]++;
    }

    int max_num = -1;
    int cnt =0;
    for(int i=0; i<n; i++){
        if(arr[i] ==1 && i>=max_num){
            max_num = i;
            cnt++;
        }
    }
    if(cnt>0) cout<<max_num;
    else cout<<max_num;


    return 0;
}
