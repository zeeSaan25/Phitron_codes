#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define boost() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

class Student{
    public:
    string name;
    int cls;
    char sec;
    int id;
};
int main(){
    boost();
    int n; cin>>n;
    Student a[n];
    for(int i=0; i<n; i++){
        cin>>a[i].name>>a[i].cls>>a[i].sec>>a[i].id;
    }
    for(int i=0; i<n/2; i++){
        swap(a[i].sec, a[n-i-1].sec);
    }
    for(int i=0; i<n; i++){
        cout<<a[i].name<<" "<<a[i].cls<<" "<<a[i].sec<<" "<<a[i].id<<endl;
    }
    return 0;
}