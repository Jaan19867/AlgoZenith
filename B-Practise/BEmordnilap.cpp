#include<bits/stdc++.h>

using namespace std;

int MOD=1e9+7;
int binfact( int n ){
    if(n==1)return 1; 

    int ans=n;
    return ans*binfact(n-1);
}

void solve(){

    int n ; 
    cin>>n;

    int power=binfact(n)%MOD;

    int ans=n*(n-1)*power%MOD;
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