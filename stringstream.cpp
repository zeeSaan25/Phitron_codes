#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define boost() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    boost();
    string s;
    getline(cin,s);
    stringstream ss(s);
    string word;
    while(ss >> word){
        cout<<word<<endl;
    }
    return 0;
}