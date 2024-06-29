#include<bits/stdc++.h>
  // Given N elements
    // Q queries, find xOR of elements in range [L, R] for each query
using namespace std;

void solve(){
    int n;
    cin>>n;
    int l,r;
    cin>>l>>r;


    int arr[n];
      int prefix[n+1];
      prefix[0]=0;
    for( int i=0;i<n;i++){
        cin>>arr[i];
        prefix[i+1]=prefix[i]^arr[i];
    }

    int ans=prefix[r+1]-prefix[l];
    cout<<ans<<'\n';

    // l se r tak ke element ka xor nikalana he 
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin>>T;
    while(T--)
        solve();
}