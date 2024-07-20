#include<bits/stdc++.h>

using namespace std;

void solve(){

    int n ;
    cin>>n;

    int ans=0;

    while(n--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;

        ans+=(abs(a-c)+1)*(abs(b-d)+1);
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