#include<bits/stdc++.h>

using namespace std;

void solve(){

    int a , b, c, d;
    cin>>a>>b>>c>>d;

    int ans=0;
    ans+=a;


    ans+=2*min(b,c);

    int rembc=max(b,c)-min(b,c);
    ans+=min(rembc,a+1);
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