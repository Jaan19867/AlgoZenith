#include<bits/stdc++.h>

using namespace std;

void solve(){

    int n , m ; 
    cin>>n>>m;


    int mini=min(n , m );
    cout<<mini+1<<'\n';

    for( int i=0;i<mini;i++){
        cout<<i<<" "<<mini-i<<'\n';

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