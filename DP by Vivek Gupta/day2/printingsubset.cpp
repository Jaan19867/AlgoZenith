#include<bits/stdc++.h>

using namespace std;

int dp[1010][1010];
int n;

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

  void printset(int level , int left ){
    if(level==n){
        return ; 
    }

    // find the correct transition 
    if(rec(level+1,left)==1){
        // we are not taking 
printset(level+1,left);
    }else if(rec(rec+1,left-arr[level])){
                       cout<<arr[level]<<" ";
                       printset(rec+1,left-arr[left]);
    }
  }

void solve(){
    
    cin>>n;
    int arr[n];
    memset(dp , -1 , sizeof(dp));
    for( int i=0;i<n;i++) cin>>arr[i];
    int k ; 
    cin>>k;
    if( rec(0,0,n,k,arr)){
        printset(0,k);
    }
   


}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin>>T;
    while(T--)
        solve();
}