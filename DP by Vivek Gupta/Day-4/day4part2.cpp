#include<bits/stdc++.h>

    using namespace std;
   int n ; 
   string t="0100";

  int dp[100100][5];
    int rec(int level , int match){


        // pruning 
          if(match==4){
            // already matched so 
            return 0 ; 

          }

        // basecase 

        if(level==n){
            return 1; 

        }


        // cache check 
        if(dp[level][match]!=-1){

            // counting problem so number will always be positive 
            return dp[level][match];


        }

        // compute 

        // in first rec we are putting same as what required 
        // if we put the other character , so isilye match nahi kya 
        
         int ans=rec(level+1, match+1+rec(level+1,match));

         


        // save and compute 







    }


void solve(){
 
    cin>>n;

    cout<<rec(0,0)<<'\n';


}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin>>T;
    while(T--)
        solve();
}