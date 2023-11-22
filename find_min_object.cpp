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

int main(){
    boost();
    int n; cin>>n;
    Student a[n];
    for(int i=0; i<n; i++){
        cin>>a[i].name>>a[i].roll>>a[i].marks;
    }
    Student mn;
    mn.marks = INT_MAX;
    for(int i=0; i<n; i++){
        if(a[i].marks < mn.marks){ //marks er vittite comparison kora hoise
            mn = a[i]; //jei object er student er marks kom sei object take pura mn object er moddhe rekhe dea hoise
        }
    }
    cout<<mn.name<<" "<<mn.roll<<" "<<mn.marks<<endl;
    return 0;
}