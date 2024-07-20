#include<bits/stdc++.h>
   int n ; 
//   int arra[100100][0],arrb[100100][1],arrc[100100][2];

// ! Isme jo exception aa raha he usk reason mene 
// ! notebook me likha he 


   int cost[100100][3];
   int dp[100100][3];

using namespace std;

int rec(int level , int last){

    // pruning 


    // base case 
if(level==n){
    return 0 ; 

}

    // cache and check 

    if(dp[level][last]!=-1){
        return dp[level][last];
    }


    // compute and condition check 

    int ans=0;
 
  for( int i=0;i<3;i++){
    if(last!=i){

    ans=max(ans , rec(level+1,i)+cost[level][i]);
    }
  }



    // save and return 

    return dp[level][last]=ans; 


}

void solve(){
 
    cin>>n;

    for( int i=0;i<n;i++){

       cin>>cost[i][0]>>cost[i][1]>>cost[i][2];
   
    }

    memset(dp , -1 , sizeof(dp ));
    
    int ans=0;
    ans=max(ans , rec(0,0));
    ans=max(ans , rec(0,1));

    cout<<ans <<'\n';

    

}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


        solve();
}