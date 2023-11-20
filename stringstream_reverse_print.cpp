#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define boost() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void print(stringstream& ss){
    string word;
    if(ss>>word){
        
        print(ss);
        cout<<word<<endl; 
    }
}

int main(){
    boost();
    string s;
    getline(cin, s);
    stringstream ss(s);
    print(ss);
    return 0;
}