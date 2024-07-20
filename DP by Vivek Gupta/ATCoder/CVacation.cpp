#include<bits/stdc++.h>

using namespace std;

int n ;
int dp[100100][3];

vector<int> arra;
vector<int> arrb;
vector<int> arrc;

int rec(int level, int last_taken ){

    // pruning 

    // base case 
  if(level==n){
    return 0;
  }

    // cache check 

    if(dp[level][last_taken]!=-1){
        return dp[level][last_taken];
    }


    // computation and range checking 
 
 int ans=0;

if(last_taken==0){
    ans=max(ans , rec(level+1,1) +arrb[level]);
    ans=max(ans , rec(level+1,2) +arrc[level]);

}

if(last_taken==1){
    ans=max(ans , rec(level+1,0) +arra[level]);
    ans=max(ans , rec(level+1,2) +arrc[level]);

}

if(last_taken==2){
    ans=max(ans , rec(level+1,0) +arra[level]);
    ans=max(ans , rec(level+1,1) +arrb[level]);

}

return dp[level][last_taken]=ans; 




    // save and return 
}

void solve(){
  
    cin>>n;


   arra.resize(n);
   arrb.resize(n);
   arrc.resize(n);
   

   memset(dp , -1 , sizeof(dp ));



    for( int i=0;i<n;i++){
        int a , b , c; 
        cin>>a>>b>>c;
         
        arra[i]=a;
         arrb[i]=b;
        arrc[i]=c;


    }

    int ans=0;
    ans=max(ans,rec(0,0));
    ans=max(ans,rec(0,1));
    ans=max(ans,rec(0,2));

    cout<<ans<<'\n';

}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin>>T;
    while(T--)
        solve();
}