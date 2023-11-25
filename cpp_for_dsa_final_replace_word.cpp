#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
#define boost() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    boost();
    int t; cin>>t;
    while( t-- ){
        string s, x;
        cin>>s>>x;
        int pos = s.find(x);
        while( pos != -1){
            s.replace(pos, x.size(), "#");
            pos = s.find(x, pos+1);
        }
        cout<<s<<endl;
    }
    return 0;
}