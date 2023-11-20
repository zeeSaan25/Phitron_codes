#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define boost() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int * sort_it(int n){
    int * a = new int[n];   //*a contain the address of 1st index of the array 
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a, a+n, greater<int>());
    return a; //return the address of 1st index of the array
}

int main(){
    boost();
    int n; cin>>n;
    int * a = sort_it(n);
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}