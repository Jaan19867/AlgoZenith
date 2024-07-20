#include<bits/stdc++.h>

using namespace std;

void solve(){
    int a , b, c, d;
    cin>>a>>b>>c>>d;

    int ans=0;
    ans+=b;
    a-=b;


    while(a){
        a-=c-d;
        // c alarm time and d is mint to all sleep 
        ans+=c;
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