#include<bits/stdc++.h>
#define int long long 
using namespace std;

void solve(){
    int n;
    cin>>n;
    // n is size of array 
    // k =1 to k==n   sab pe beautiful hona chhhahye 
    int arr[n+1];

    for( int i=1;i<=n;i++){
       arr[i]=i;
    }


    for( int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<'\n';

    
}

signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin>>T;
    while(T--)
        solve();
}