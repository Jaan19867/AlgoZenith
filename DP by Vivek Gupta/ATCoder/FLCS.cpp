#include<bits/stdc++.h>

using namespace std;
string a , b;
string sol="";

int dp[3001][3001];


int rec( int i , int j ){
    if(i==a.length() || j==b.length()) return 0; 

    // save and retrieve

    if(dp[i][j]!=-1){
        return dp[i][j];
    }


    // compute 

    int ans=0;

    ans=max(ans , rec(i,j+1));

    ans=max(ans , rec(i+1,j));

    if(a[i]==b[i]){
        ans=max(ans , 1+rec(i+1,j+1));
    }

    return dp[i][j]=ans ; 


}

void print(int i , int j ){
    if(i==a.length() || j==b.length()) return ; 


    if(rec(i,j)==rec(i+1,j)){
        print(i+1,j);
    }else if(rec(i,j)==rec(i,j+1)){
        print(i,j+1);
    }else{

        sol+=a[i];
        print(i+1,j+1);
    }

}

void solve(){
    cin>>a>>b;
    memset(dp , -1 , sizeof(dp));

 print(0,0);
 cout<<sol<<'\n';
    
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

  
        solve();
}