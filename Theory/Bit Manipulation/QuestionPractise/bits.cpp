#include<bits/stdc++.h>

using namespace std;
#define int long long 

int ans(int l , int r){
    // l ko r tak le ke jaana he aise ki right most bit set karte rehna he
    // jab tak ki l<r
       int i=0;

   for( int bit=0;bit<31;bit++){

    if(!(l&(1<<bit))){
        // yaani last bit zero he so ab isko set karna he

        if((l|(1<<bit))<=r){
            // now ham ye kar sakte he 
            l=l|(1<<bit);
            // setting last bit 
        }else{
            return l ; 
        }
    }
   }

    return l ; 
}

void solve(){
    int q;
    cin>>q;
    while(q--){
        int l , r; 
        cin>>l>>r;

        // now highest set bit batana he is range me jo ki ek hi hoga
        // 2^x  dhoondhne he jo ki r se chhota ho aur l se bada ho 
        cout<<ans(l,r)<<'\n';
    }
}

signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin>>T;
    while(T--)
        solve();
}