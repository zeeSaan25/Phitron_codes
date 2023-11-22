#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define boost() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

class Student{
    public:
        string name;
        string id;
        int marks;
        double cgpa;
};


int main(){
    boost();
    int n;
    cin>>n;
    //Student a[n];
    Student* a = new Student[n]; //Dynamic Array
    for(int i=0; i<n; i++){
        cin.ignore();
        getline(cin, a[i].name);
        cin>>a[i].id>>a[i].marks>>a[i].cgpa;
    }

    for(int i=0; i<n; i++){
        cout<<a[i].name<<" "<<a[i].id<<" "<<a[i].marks<<" "<<a[i].cgpa<<endl;
    }
    return 0;
}