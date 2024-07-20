#include<bits/stdc++.h>

using namespace std;
#define int long long 


void solve(){

    int a , b; 
    cin>>a>>b;


   int ans=0;
   
   while(a>0 && b>0){
       
       if(a>=b){
           ans+=a/b;
           a=a%b;
       }
       
       else{
           ans+=b/a;
           b=b%a;
         
       }
       
       
     
   }
   
   cout<<ans<<'\n';
    
}

signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

        solve();
}