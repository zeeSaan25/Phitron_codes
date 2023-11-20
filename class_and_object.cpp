#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define boost() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
class Student{
   public:
        string name;
        int roll;
        double cgpa;
};

int main(){
    boost();
    Student a,b;
    getline(cin,a.name);

    cin>>a.roll>>a.cgpa;
    //getchar(); //we can also use getchar() after first input
    cin.ignore();
    
    getline(cin, b.name);
    cin>>b.roll>>b.cgpa;
    cout<<a.name<<" "<<a.roll<<" "<<a.cgpa<<endl;
    cout<<b.name<<" "<<b.roll<<" "<<b.cgpa<<endl;
    
    return 0;
}