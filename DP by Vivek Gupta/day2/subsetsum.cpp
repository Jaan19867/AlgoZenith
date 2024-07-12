#include<bits/stdc++.h>

using namespace std;

int dp[1010][1010];

  int rec(int level , int taken,int n ,int k,int arr[] ){

    // pruning 
    if(taken>k){
        return 0 ; 
        // taken target se bada nahi ho sakta he

    }

    // base case 

    if(level==n ){

        if(taken==k){

        return 1;
        }else{
            return 0 ; 
        }
    }else{
    
    }

    // cache checking 

if(dp[level][taken]!=-1){
    return dp[level][taken];
}


    // transition 


    int ans= 0; 

    if(rec(level+1,taken,n,k,arr)==1){
        ans=1;
    }else if(rec(level+1,taken+arr[level],n,k,arr)){
            ans=1;
    }

   
    // save and return 
    return dp[level][taken]=ans ; 

  }

void solve(){
    int n;
    cin>>n;
    int arr[n];
    memset(dp , -1 , sizeof(dp));
    for( int i=0;i<n;i++) cin>>arr[i];
    int k ; 
    cin>>k;
    rec(0,0,n,k,arr)


}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin>>T;
    while(T--)
        solve();
}