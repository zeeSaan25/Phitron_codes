#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define boost() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    boost();
    int n; cin>>n;
    int * a = new int[n];
    int * b = new int[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
        b[i]=a[i];
    }
    delete[] a;

    a = new int[n+2];

    for(int i=0; i<n; i++){
        a[i] = b[i];
    }

    delete[] b;
    for(int i=n; i<n+2; i++){
        cin>>a[i];
    }
    for(int i=0; i<n+2; i++){
        cout<<a[i]<<" ";
    }


    return 0;
}