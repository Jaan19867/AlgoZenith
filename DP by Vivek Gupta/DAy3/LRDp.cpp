#include<bits/stdc++.h>

using namespace std;
int n ; 
int x[1001];
int dp[1001][1001]; 

int rec(int l , int r){

    // pruning 

    // base case 
if(l+1==r){
    // it's a single unit 
    return 0 ; 
    // as cost 0 hi hogi 
}

// cache and check 
if(dp[l][r]!=-1){
    return dp[l][r];



}

    // save and compute 


    // compute 
    int ans=1e9;
    // minimize answer 

    for( int p=l+1;p<=r-1;p++){
        ans=min(ans, x[r]-x[l] + rec(l,p)+ rec(p,r));

    }

    return dp[l][r]=ans; 

}

void solve(){

    cin>>n;
    for( int i=1;i<=n;i++){
        cin>>x[i];
    }
    x[0]=0;
    memset(dp , -1 , sizeof(dp ));
    cout<<rec(0,n)<<'\n';

    
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin>>T;
    while(T--)
        solve();
}