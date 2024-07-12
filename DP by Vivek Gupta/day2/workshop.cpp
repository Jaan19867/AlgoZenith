#include<bits/stdc++.h>

using namespace std;

int t[1001];
int s[1001];
int x, k ; 
int n ; 

// max value of level +1 , max value of tiem_taken +1 , max value of item taken 

int dp[101][101][101];

int rec(int level , int time_taken , int item_taken ){
  // max skill i can make from [level , ...n-1]   

  // pruning 

  // base cases 
  if(level==n){
    // agar ham rec bhejne se pehle check kar rahe he to yeha pe jaroorat nahi 
    return 0 ; 
  }

   //   cache check 
if(dp[level][time_taken][item_taken]!=-1){
    return dp[level][time_taken][item_taken];

}

    // copute / transition 
            int ans= rec(level+1,time_taken,item_taken);
            if(time_taken+t[level] <=x && item_taken+1<=k){
                ans=min(ans, s[level]+rec(level+1,time_taken+t[level],item_taken+1))
            }
    /// save and return 

    return dp[level][time_taken][item_taken]=ans ; 

}


void solve(int level , int time_taken , int item_taken  ){
  cin>>n;

  memset(dp,-1, sizeof(dp ));
    

    rec();
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin>>T;
    while(T--)
        solve();
}