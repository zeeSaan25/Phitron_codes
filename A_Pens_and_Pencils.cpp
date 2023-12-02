#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define boost() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    boost();
    int t; cin>>t;
    while(t--){
        double a,b,c,d,k; cin>>a>>b>>c>>d>>k;
        int x = ceil(a/c);
        int y = ceil(b/d);
        (x+y > k) ? cout<<"-1"<<endl : cout<<x<<" "<<y<<endl;
    }
    return 0;
}