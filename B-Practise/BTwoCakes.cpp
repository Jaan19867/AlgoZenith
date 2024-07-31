#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n , a, b;
    cin>>n>>a>>b;

    int ans=INT_MAX;
    

    for( int x=1;x<n;x++){
         int t1=x/a;
         int t2=(n-x)/b;

        ans=min(t1,t2  );

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