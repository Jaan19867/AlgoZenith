#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;


    // we have to calculate n ^k  and it will be our answer 
int ans=1;
    for( int i=0;i<k;i++){
ans *=n;

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