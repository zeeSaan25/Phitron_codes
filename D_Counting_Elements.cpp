#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define boost() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    boost();
    int n, count=0;
    cin>>n;
    vector<int> v(n);
    
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(v[i]+1 == v[j]){
                count++;
                break;
            }
        }
    }
    cout<<count<<endl;
    return 0;
}
