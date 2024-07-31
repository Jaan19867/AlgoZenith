#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n , x; 
    cin>>n>>x;
          int ans=0;
    for( int i=1;i<n;i++){
        for( int j=i+1;j<n;j++){
          

          if(x-(i+j)>0 && (n-i*j)/(i+j)>0){
            ans++;
          }
            
        }
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