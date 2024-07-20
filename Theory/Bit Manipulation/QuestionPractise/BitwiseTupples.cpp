#include<bits/stdc++.h>

using namespace std;
#define int long long 

int binpow(int a , int b){

    if(b==0) return 1; 

    int res=  binpow(a,b/2);
    res=res*res%MOD;

    if(b%2){
        return a*res%MOD;
    }else{

        return res%MOD ; 
    }


}

int MOD=1e9+7;

void solve(){

    int n , m  ; 

    cin>>n>>m;

    int k=n*(n+1)/2;  // will laways give int value koi ek to even hoga hi

    cout<<binpow(n,k)%MOD<<'\n'; 
    

    
}

signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin>>T;
    while(T--)
        solve();
}