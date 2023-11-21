#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define boost() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    boost();
    int t; cin>>t;
    while(t--){
        int n;
        cin>>n;
        char s[n];
        cin>>s;
        int sum=0;
        int cnt[26]={0};
        for(int i=0; i<n; i++){
            cnt[s[i]-'A']++;
        }
        for(int i=0; i<26; i++){
            if(cnt[i]>0){
                sum+=cnt[i]+1;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}