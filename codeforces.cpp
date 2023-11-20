#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define boost() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    boost();
    
    int a[3];
    for(int i=0; i<3; i++){
        cin>>a[i];
    }
    int mn=a[0];
    int mx=a[0];
    for(int i=0; i<3; i++){
        mx = max(mx,a[i]);
        mn = min(mn,a[i]);
    }
    cout<<mn<<" "<<mx<<endl;
    return 0;
}