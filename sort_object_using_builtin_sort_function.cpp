#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define boost() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

class Student{
    public:
        string name;
        int roll;
        int marks;
};

bool cmp(Student a, Student b){
    if(a.marks > b.marks) return true;   //true return korle swap hobe nah, jmn ache setai thakbe
    else if(a.marks < b.marks) return false;   //false return kora mane thik nai, swap korte hobe
    else if(a.marks == b.marks){
        if(a.roll <= b.roll) return true;
        else return false;
    }
}

int main(){
    boost();
    int n; cin>>n;
    Student a[n];
    for(int i=0; i<n; i++){
        cin>>a[i].name>>a[i].roll>>a[i].marks;
    }
    sort(a, a+n, cmp);

    for(int i=0; i<n; i++){
        cout<<a[i].name<<" "<<a[i].roll<<" "<<a[i].marks<<endl;
    }
    return 0;
}