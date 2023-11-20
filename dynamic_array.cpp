#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define boost() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int * fun(int n){
    int * a = new int[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    return a;
}
int main(){
    boost();
    int n;
    cin>>n;
    int * a = fun(n);
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}