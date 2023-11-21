#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define boost() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    boost();
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string s; cin>>s;
        sort(s.begin(), s.end());
        int sz = unique(s.begin(), s.end()) - s.begin();
        cout<<(sz*2) + (n-sz)<<endl;
    }
    return 0;
}