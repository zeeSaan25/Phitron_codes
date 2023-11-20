#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define boost() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    boost();
    string s;
    getline(cin, s);
    bool inside_word = false;
    int count = 0;
    for( auto c : s){
        if(isalpha(c)){
            if(inside_word == false) count++;
            inside_word = true;
        }
        else inside_word = false;
    }
    cout<<count<<endl;
    return 0;
}