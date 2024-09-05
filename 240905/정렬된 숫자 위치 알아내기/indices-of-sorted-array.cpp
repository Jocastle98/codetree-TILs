#include <iostream>
#include <algorithm>
using namespace std;

class Len{
    public:
    int a,n;
        Len(int a=0, int num=0){
            this->a=a;
            this->n=num;
        }
};

bool cmp(Len a, Len b){
    if(a.a==b.a){
        return a.n<b.n;
    }
    return a.a<b.a;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    Len l[n];
    int result[n];
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        l[i] = Len(a,i+1);
    }
    sort(l,l+n,cmp);

    for(int i=0; i<n; i++){
        result[l[i].n] = i+1;
    }
    for(int i=1; i<=n; i++){
        cout<<result[i]<<" ";
    }
    return 0;
}