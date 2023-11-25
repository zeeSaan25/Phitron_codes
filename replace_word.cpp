#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define boost() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    boost();
    string s;
    cin>>s;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='E' && s[i+1]=='G' && s[i+2]=='Y' && s[i+3]=='P' && s[i+4]=='T'){
            s.replace(i,5," ");
        }
    }
    cout<<s<<endl;
    return 0;
}