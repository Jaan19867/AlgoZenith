#include<bits/stdc++.h>

using namespace std;

int n , m ; 
string a , b; 

int dp[1001][1001];

int rec(int i , int j ){ 

// return the LCS of   a[i,,,,,n-1]   and b[j........m-1]



// pruning 
// we don't need any pruning 

// basecase 

if(i>=n || j>=m){
    return 0 ; 
    // jab koi ek stirng khatam ho jaaye 

}


// save and compute 

if(dp[i][j]!=-1){
    return dp[i][j];
}

// compute 

int ans=0;

ans=max(ans, rec(i+1,j));
ans= max(ans , rec(i , j+1));

if(a[i]==b[i]){

    ans= max( ans , 1+ rec(i+1,j+1));
}




// save and return 

dp[i][j]=ans; 

return dp[i][j];



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