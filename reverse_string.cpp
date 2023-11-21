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
    int flag = 0;
    while(ss>>word){
        reverse(word.begin(), word.end());
        if(flag == 0){
            cout<<word;
            flag = 1;
        }
        else cout<<" "<<word;
    }
    return 0;
}
