#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define boost() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

class Student{
    public:
    int roll;
    int cls;
    double gpa;

    Student(int roll, int cls, double gpa){
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

Student fun(){
    Student naim(102, 12, 3.45);
    return naim;
}

int main(){
    boost();
    Student nam = fun();
    cout<<nam.roll<<" "<<nam.cls<<" "<<nam.gpa<<endl;
    return 0;
}