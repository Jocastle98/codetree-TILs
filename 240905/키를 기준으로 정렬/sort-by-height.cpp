#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class student{
    public:
    string name;
    int height, kg;
        student(string name="", int height=0, int kg=0){
            this->name=name;
            this->height=height;
            this->kg=kg;
        }
};

bool cmp(student a, student b){
    return a.height<b.height;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    student students[n];
    for(int i=0; i<n; i++){
        string name;
        int a,b;
        cin>>name>>a>>b;
        students[i] = student(name,a,b);
    }
    sort(students,students+n,cmp);

    for(int i=0; i<n; i++){
        cout<<students[i].name<<" "<<students[i].height<<" "<<students[i].kg<<endl;
    }

    return 0;
}