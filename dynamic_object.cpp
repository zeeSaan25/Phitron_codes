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

Student* fun(){
    Student * Kabir = new Student(122, 12, 4.56); //there is a pointer of Student object in Kabir
    return Kabir;    //return pointer of Student that is in Kabir
}

int main(){
    boost();
    Student * nam = fun(); //receive pointer of Student constructor
    cout<<nam->roll<<" "<<nam->cls<<" "<<nam->gpa<<endl;
    delete nam; //delete pointer of student object
    return 0;
}