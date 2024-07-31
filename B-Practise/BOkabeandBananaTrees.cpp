#include<bits/stdc++.h>

using namespace std;

void solve(){
    int m , b; 
    cin>>m>>b;
    int xmaxi=m*b;
    int ymaxi=b;


    // check for every x from 0 to xmaxi 
    // and for every x there will be y max 
       int ans=0;
    for( int i=0;i<xmaxi;i++){
        int ymax=(i/m)*(-1) +b;
            int sum=0;
        for( int j=0;j<=i;j++){
            for( int k=0;k<=ymax;k++){
                sum+=j+k;

            }
        }

        ans =max(ans , sum);


    }

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