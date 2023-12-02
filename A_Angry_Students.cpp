#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define boost() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    boost();
    int t; cin>>t;
    while(t--){
        int n,count = 0; cin>>n;
        string s; cin>>s;
        while(1){
            int flag = 0;
            for(ll i=n-2; i>=0; i--){
                if(s[i]=='A' && s[i+1]=='P'){
                    flag = 1;
                    s[i+1] = 'A';
                }
            }
            if(flag == 0){
                break;
            }
            count++;
        }
        cout<<count<<endl;
    }
    return 0;
}