#include<bits/stdc++.h>
#define int long long 
using namespace std;

int n , w;
int weight[101];
int value[101];

int dp[100][100100];


int rec(int level , int left){

    // pruning 

    // base case 
     if(level==n){
        return 0 ; 
     }

    // cache and check 
if(dp[level][left]!=-1){
    return dp[level][left];
}

    // compute and condition checking 
  int ans=0;


  if((left-weight[level])>=0){

  ans=max(ans , rec(level+1,left-weight[level])+value[level]);
  }


  ans=max(ans , rec(level+1,left));






    // save and return 

    return dp[level][left]=ans; 





}


void solve(){

    
    cin>>n>>w;

    for( int i=0;i<n;i++){
        cin>>weight[i]>>value[i];

    }

    memset(dp,-1,sizeof(dp ));



    cout<<rec(0,w)<<'\n';


}

signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

 
        solve();
}