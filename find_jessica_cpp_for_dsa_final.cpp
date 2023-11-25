#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
#define boost() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    boost();
    int flag = 0;
    string s;
    string x = "Jessica";
    getline(cin, s);
    stringstream ss(s);
    string word;
    while(ss>>word){
        if(word == x) flag=1;
    }
    (flag==1) ? (cout<<"YES") : (cout<<"NO");
    return 0;
}