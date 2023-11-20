#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define boost() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    boost();
    //int t; //cin>>t;
        int n,sum;
        cin>>n>>sum;
        int a[n];
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                for(int k=j+1; k<n; k++){
                    if(a[i]+a[j]+a[k] == sum){
                        cout<<"YES"<<endl;
                        break;
                    }
                }
            }
        }
    return 0;
}