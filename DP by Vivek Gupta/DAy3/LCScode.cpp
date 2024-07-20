#include<bits/stdc++.h>

using namespace std;
int n , m ;
string a , b; 
int dp[1001][1001];

int rec(int i , int j ){

    // pruning 



    // base case 

    if(i>=n || j>=m){
        return 0 ; 

    }

    //  save and compute 

    // if we are handling pruning at the time of computing 
    if(dp[i][j]!=-1){
        return dp[i][j];
    }


    // compute 

    int ans=0;

    ans=max(ans , rec(i+1,j));// discard the first character of A
    ans=max(ans , rec(i,j+1));// discard the first character of B

    if(a[i]==b[j]){
        ans=max(ans,1+rec(i+1,j+1));



    }

    // save and return 

    return dp[i][j]=ans; 

    // cache and return 


}
string sol ; 


void printsol(int i , int j){

    if(i==n || j==m) return ; 

    if(rec(i,j)==rec(i+1,j)){
        printsol(i+1,j);
    }else if(rec(i,j)==rec(i,j+1)){
        printsol(i,j+1);

    }else{

        sol+=a[i];
        printsol(i+1,j+1);
    }


}



void solve(){
    cin>>n>>m;
    cin>>a>>b;
    memset(dp , -1 , sizeof(dp ));

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