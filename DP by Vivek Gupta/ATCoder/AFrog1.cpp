#include<bits/stdc++.h>

using namespace std;

int dp[100100];

int rec(int level , int arr[]){

    // pruning 


    // base case 
if(level==0){
    return 0 ; 
}

    // cache check 
if(dp[level]!=-1){
    return dp[level];

}



    // computation and checking 

    int ans=INT_MAX;
        if(level-1>=0){

    ans=min(ans, rec(level-1,arr)+abs(arr[level]-arr[level-1]));
        }

        if(level-2>=0){

    ans=min(ans, rec(level-2,arr)+abs(arr[level]-arr[level-2]));
        }




    // save and return 

    dp[level]=ans; 
    return dp[level];
}

void solve(){
    int n ;
    cin>>n;
    int arr[n];

    for( int i=0;i<n;i++)cin>>arr[i];

    cout<<rec(n-1,arr)<<'\n';
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin>>T;
    while(T--)
        solve();
}