#include<bits/stdc++.h>
int n , m ; 
int arr[1001][1001];
int dp[1001][1001];
bool done[1001][1001];
using namespace std;

int rec(int r , int c){

    // pruning 

    if(r<0 || c<0){
        // not possible 

        return -1e9;

    }

    // base case 

    if(r==0 && c==0){
        return arr[0][0];
    }

// safe and check 

if(done[r][c]){
    return dp[r][c];
}

int ans=-1e9;
if(r!=0){
    // compute 
    ans=max(rec(r-1,c)+arr[r][c], ans);
}

if(c!=0){
    ans=max(ans, rec(r,c-1),arr[r][c]);

}



    // save and return 
    done[r][c]=1;
    
    return dp[r][c]=ans; 


}

void solve(){
    cin>>n>>m;
    for( int i=0;i<n;i++){
        for( int j=0;j<m;j++){
                  cin>>arr[i][j];
                  done[i][j]=0;
        }
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