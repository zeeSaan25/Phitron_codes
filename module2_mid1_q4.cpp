#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define boost() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
class Student{
    public:
    int id;
    char name[101];
    char section;
    int marks; 
};

int main(){
    boost();
    int t; cin>>t;
while(t--){
    Student a,b,c;
    cin>>a.id>>a.name>>a.section>>a.marks;
    cin>>b.id>>b.name>>b.section>>b.marks;
    cin>>c.id>>c.name>>c.section>>c.marks;

    if(a.marks>b.marks && a.marks>c.marks){
        cout<<a.id<<" "<<a.name<<" "<<a.section<<" "<<a.marks<<endl;
    }

    else if(b.marks>a.marks && b.marks>c.marks){
        cout<<b.id<<" "<<b.name<<" "<<b.section<<" "<<b.marks<<endl;   
    }

    else if(c.marks>a.marks && c.marks>b.marks){
        cout<<c.id<<" "<<c.name<<" "<<c.section<<" "<<c.marks<<endl;
    }

    else if(a.marks == b.marks && a.marks == c.marks && b.marks == c.marks){
        if(a.id<b.id && a.id<c.id){
            cout<<a.id<<" "<<a.name<<" "<<a.section<<" "<<a.marks<<endl;
        }
        else if(b.id<a.id && b.id<c.id){
            cout<<b.id<<" "<<b.name<<" "<<b.section<<" "<<b.marks<<endl;
        }
        else if(c.id<a.id && c.id<b.id){
            cout<<c.id<<" "<<c.name<<" "<<c.section<<" "<<c.marks<<endl;
        }
    }

    else if(a.marks == b.marks){
        if(a.id<b.id){
            cout<<a.id<<" "<<a.name<<" "<<a.section<<" "<<a.marks<<endl;
        }
        else{
            cout<<b.id<<" "<<b.name<<" "<<b.section<<" "<<b.marks<<endl;
        }
    }

    else if(a.marks == c.marks){
        if(a.id<c.id){
            cout<<a.id<<" "<<a.name<<" "<<a.section<<" "<<a.marks<<endl;
        }
        else{
            cout<<c.id<<" "<<c.name<<" "<<c.section<<" "<<c.marks<<endl;
        }
    }
    
    else if(b.marks == c.marks){
        if(b.id<c.id){
            cout<<b.id<<" "<<b.name<<" "<<b.section<<" "<<b.marks<<endl;
        }
        else{
            cout<<c.id<<" "<<c.name<<" "<<c.section<<" "<<c.marks<<endl;
        }
    }
}
    return 0;
}