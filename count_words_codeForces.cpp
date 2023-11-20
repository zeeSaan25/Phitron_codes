#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define boost() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    boost();
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    int count=0;
    while(ss>>word){
        for(auto c:word){
            if((c='A' && c<='Z') || (c>='a' && c<='z') || (c>='0' && c<='9')){
                count++;
                break;
            }
        }
    }
    cout<<count<<endl;
    return 0;
}