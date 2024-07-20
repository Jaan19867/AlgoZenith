#include<bits/stdc++.h>

using namespace std;
int dp[1001][1001];


int rec(int x , int y){

         // pruning case 
        

         //   base case 
         if(x==0 && y==0){
            return 0 ; 

         }

         // cache check 
          if(dp[x][y]!=-1){
            return dp[x][y];

          }

         // compute 
         int ans =0  ; 


         for( int z=0;z<x;z++){
            if(rec(z,y)==0){
                ans=1;
                break; 
            }
         }

         for( int z=0;z<y;z++){
            if(rec(x,z)==0){
                ans=1;
                break; 
            }
         }

           for( int z=1;z<min(x,y);z++){
            if(rec(x-z,y-z)==0){
                ans=1;
                break; 
            }
         }

         // save and return 
         return dp[x][y]=ans; 
         

}

void solve(){
    int a , b; 
    cin>>a>>b;
   
   
   // iteration me iterate karna hota he aur kaise iterate karna he 
   // wo mene notebook me likha he 

   for( int x=0;x<=a;x++){
            for( int y=0;y<=b;y++){


         // pruning case 
        

         //   base case 
         if(x==0 && y==0){
                  dp[x][y]=0;


         }

         // compute 
         int ans =0  ; 


         for( int z=0;z<x;z++){
            if(dp[z][y]==0){
                ans=1;
                break; 
            }
         }

         for( int z=0;z<y;z++){
            if(dp[x][z]==0){
                ans=1;
                break; 
            }
         }

           for( int z=1;z<min(x,y);z++){
            if(dp[x-z][y-z]==0){
                ans=1;
                break; 
            }
         }

         // save and return 
         dp[x][y]=ans; 


            }


            
   }

   cout<<dp[x][y]<<

    cout<<rec(a,b)<<'\n';


}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin>>T;
    while(T--)
        solve();
}