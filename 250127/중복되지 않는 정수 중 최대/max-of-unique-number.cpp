#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



int main() {
    

    // Write your code here!
    int n;
    cin>>n;
    int arr[1001] ={};
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        arr[a]++;
    }

    int max_num = -1;

    for(int i=1; i<=1000; i++){
        if(arr[i] ==1){
            max_num = max(i, max_num);
        }
    }
    cout<<max_num;
    return 0;
}
