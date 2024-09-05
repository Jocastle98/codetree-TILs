#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Student{
    public:
    string n;
    int h,k;
        Student(string name="", int height=0, int kg=0){
            this->n=name;
            this->h=height;
            this->k=kg;
        }
};
bool cmp(Student a, Student b){
    if(a.h==b.h){
        return a.k>b.k;
    }
    return a.h<b.h;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    Student stu[n];

    for(int i=0; i<n; i++){
        string a;
        int b,c;
        cin>>a>>b>>c;

        stu[i] = Student(a,b,c);
    }
    sort(stu,stu+n,cmp);
    for(int i=0; i<n; i++){
        cout<<stu[i].n<<" "<<stu[i].h<<" "<<stu[i].k<<endl;
    }
    return 0;
}