#include<bits/stdc++.h>

using namespace std;

void solve(){
    int x,y,k;
    cin>>x>>y>>k;

    int req=k*y+k;

    int ans=(req+x-1)/x;

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