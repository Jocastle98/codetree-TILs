#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

class Student{
    public:
    int k,e,m;
    string name;
        Student(string name="",int kor=0, int eng=0, int math=0){
            this->name=name;
            this->k=kor;
            this->e=eng;
            this->m=math;
        }
};
bool cmp(Student a, Student b){
    if(a.k==b.k){
        if(a.e==b.e){
            return a.m>b.m;
        }
        return a.e>b.e;

    }
    return a.k>b.k;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    Student students[n];
    for(int i=0; i<n; i++){
        string name;
        int a,b,c;
        cin>>name>>a>>b>>c;
        students[i] = Student(name,a,b,c);
    }
    sort(students,students+n,cmp);

    for(int i=0; i<n; i++){
        cout<<students[i].name<<" "<<students[i].k<<" "<<students[i].e<<" "<<students[i].m<<endl;
    }

    return 0;
}