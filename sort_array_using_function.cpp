#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define boost() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    boost();
    int n; cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a, a+n, greater<int>());
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    cout<<endl;
    sort(v.begin(), v.end(), greater<int>());  //descending order
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    return 0;
}