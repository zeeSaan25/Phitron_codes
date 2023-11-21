#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define boost() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    boost();
    int t; cin>>t;
    while( t-- ){
        string s;
        cin>>s;
        int sum1=0, sum2=0;
        for(int i=0; i<6; i++){
            if(i<3){
                sum1+=s[i];
            }
            else sum2+=s[i];
        }
        if(sum1==sum2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}