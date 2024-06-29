#include<bits/stdc++.h>

using namespace std;

void solve(){
    int x,y,k;
    cin>>x>>y>>k;

    // now abhi ham kis phase me he hame 1 to y wale cycle me jaana he 
    // 

    while(k>=0){
        // 

      
         if(x!=1){

        int rem=y-x%y;
        x+=rem;
        x=x/y;
        k-=rem;
         }else{

            k=k%(y-1);
            x+=k;

         }
        

    }

    cout<<x<<'\n';
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin>>T;
    while(T--)
        solve();
}