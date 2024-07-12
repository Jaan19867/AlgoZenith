#include<bits/stdc++.h>

using namespace std;
int n;

int dp[1010];

int rec(int level ){
    // ret -> number of way to N if we are at start 
    // level -> stair i am at 
    // pruning 
//  when we cross the level 
if(level>n){
    return 0;
}

   // base case 
   if(level==n){
      return 1; 
      // counting ka swaaal he to return 1 ya 0 hi hoga 

   } 

    int ans=0;

if(dp[level]!=-1){
    return dp[level];
}
  for( int step=1;step<=3;step++){


    
    if(level+step<=n){
        int ways=rec(level+step);
        ans+=ways;

    }
  }

  dp[level]=ans; 

  return dp[level]; 
  // for this level ; 

}

void solve(){

  memset(dp , -1,sizeof(dp) );
  rec(1);
}



int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin>>T;
    while(T--)
        solve();
}