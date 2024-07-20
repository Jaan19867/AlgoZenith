#include<bits/stdc++.h>

using namespace std;
int dp[100100];
int rec(int level , int k , int arr[]){

    // pruning 
         if(level<0){
            return INT_MAX ; 

         }
  
    // base case 
        if(level==0){
            return 0; 
        }

    // cache check 
 if(dp[level]!=-1){
    return dp[level];

 }

    // compute 

int ans=INT_MAX;

for( int i=1;i<=k;i++){

    // check 
    if(level-i>0){

    ans=min(ans , rec(level-i,k,arr)+ abs(arr[level]-arr[level-i]));
    }
}

return dp[level]=ans; 


    // return 

}

void solve(){
    int n ,k;
    cin>>n>>k;

    int arr[n];

    memset(dp,-1,sizeof(dp));

    for( int i=0;i<n;i++)cin>>arr[i];

    cout<<rec(n-1,k,arr)<<'\n';
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


        solve();
}