#include<bits/stdc++.h>

using namespace std;

int MOD=1e9+7;
int binpow(int a , int b){
    if(b==0){
        return 1; 
    }
    
    int res= binpow(a,b/2);
    res=res*res%MOD;
    if(b%2) return res*a%MOD;
    else{
        return res;
    }
    
    
}



void solve(){
    int n ;
    cin>>n;
    if(n==1){
        cout<<1<<'\n';
    }


   cout<<binpow(n,2)+binpow(n-1,2)<<'\n';



}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin>>T;
    while(T--)
        solve();
}