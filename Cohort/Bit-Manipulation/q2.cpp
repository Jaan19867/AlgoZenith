#include<bits/stdc++.h>
#define int long long 

using namespace std;

void solve(){
    
    int x,y,k;
    cin>>x>>y>>k;

    while(k--){
        x+=1;

        if(x%y==0){
            x=x/y;
        }
    }

    cout<<x<<'\n';
}

signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin>>T;
    while(T--)
        solve();
}