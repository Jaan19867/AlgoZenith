#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n , m;
    cin>>n>>m;

    map<int,int> mp;

    for( int i=0;i<n;i++){
        int x;
        cin>>x;
        x=x%m;
        mp[x]++;

    }

    for( auto it:mp){
        cout<<it.first<<" "<<it.second<<'\n';
    }
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin>>T;
    while(T--)
        solve();
}