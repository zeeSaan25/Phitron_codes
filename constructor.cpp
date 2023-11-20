#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define boost() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

class Student{
    public:
    string name;
    string roll;
    int cls;

    Student(string name, string roll, int cls){
        this->name = name;
        this->roll = roll;
        this->cls = cls;
    }

};
int main(){
    boost();
    Student a("messi","cse054",120);
    Student b("neymar","cse46",100);

    cout<<a.name<<" "<<a.roll<<" "<<a.cls<<endl;
    cout<<b.name<<" "<<b.roll<<" "<<b.cls<<endl;

    return 0;
}