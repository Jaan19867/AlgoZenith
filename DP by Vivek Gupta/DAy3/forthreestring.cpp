#include<bits/stdc++.h>

using namespace std;

int n , m ,o; 
string a , b; 

int dp[1001][1001][1001];

int rec(int i , int j ,int k ){ 

// return the LCS of   a[i,,,,,n-1]   and b[j........m-1]



// pruning 
// we don't need any pruning 

// basecase 

if(i>=n || j>=m || k>=o){
    return 0 ; 
    // jab koi ek stirng khatam ho jaaye 

}


// save and compute 

if(dp[i][j][k]!=-1){
    return dp[i][j][k];
}

// compute 

int ans=0;

ans=max(ans, rec(i+1,j,k));
ans= max(ans , rec(i , j+1,k));
ans= max(ans , rec(i , j,k+1));

if(a[i]==b[i]){

    ans= max( ans , 1+ rec(i+1,j+1,k+1));
}




// save and return 

dp[i][j][k]=ans; 

return dp[i][j][k];



}

void solve(){
            cin>>n>>m>>o;
            cin>>a>>b;
            memset(dp , -1 , sizeof(dp ));
            cout<<rec(0,0,0)<<'\n';
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin>>T;
    while(T--)
        solve();
}