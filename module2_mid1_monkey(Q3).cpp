#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define boost() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    boost();
    char s[100005];
    while(cin.getline(s, 100005)){
        int sz = strlen(s);
        sort(s, s+sz);
        for(int i=0; i<sz; i++){
        	if(s[i]!=' '){
        		cout<<s[i];
        	}
        }
        cout<<endl;
    }
    return 0;
}