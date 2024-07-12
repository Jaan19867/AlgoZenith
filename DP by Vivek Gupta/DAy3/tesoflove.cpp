#include<bits/stdc++.h>

using namespace std;
int x,n;
int dp[10001];

int rec(int x){
// pruning 

    // base case 
         if(x==0){
            return 0 ; 

         }


         // cache check 
            if(dp[x]!=-1){
                return dp[x];
            }

         // compute 

     int ans=0;

     for( int m=0;(1<<m)<=x;m++){

        if(rec(x-(1<<m))==0){
            ans=1;
            break; 
        }

     }

         // save and return 
return     dp[x] = ans; 


}
void solve(){


    cin>>n;
    cin>>x;
    memset(dp,-1,sizeof(dp));
    cout<<rec(x)<<'\n';
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin>>T;
    while(T--)
        solve();
}