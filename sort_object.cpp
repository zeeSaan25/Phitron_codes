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
    

    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(a[i].marks < a[j].marks){
                swap(a[i],a[j]);
            }
            else if(a[i].marks == a[j].marks){
                if(a[i].roll > a[j].roll){
                    swap(a[i],a[j]);
                }
            }
        }
    }
    for(int i=0; i<n; i++){
        cout<<a[i].name<<" "<<a[i].roll<<" "<<a[i].marks<<endl;
    }
    return 0;
}