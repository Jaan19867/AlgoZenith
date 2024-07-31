#include<bits/stdc++.h>

using namespace std;
#define int long long 
int MOD=1e9+7;

void solve(){
    int n;
    cin>>n;

    int ans=(n*(n+1)*(2*n+1))/6;
    n=n/2;
    ans+=(n*(n+1)*(2*n+1))/6;

    ans+=(n*(n+1))/2;
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