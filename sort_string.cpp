#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define boost() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    boost();
    string s;
    cin>>s;
    sort(s.begin(), s.end());
    cout<<s<<endl;
    for(auto u:s){
        cout<<u<<" ";
    }
    return 0;
}