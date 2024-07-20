#include<bits/stdc++.h>

using namespace std;

int binpow(int a , int b){
    if(b==0){
        return 1;
    }

    int res=binpow(a,b/2);

    if(b%2==0){
        // even he 
        return res*res;
    }else{
        return a*res*res;
    }
}

void solve(){
    int n ;
    cin>>n;

   int ans=0;

   for( int i=0;i<=9;i++){
    int num=binpow(10,i);

    if(n%num<n){
        ans=n-num;
    }else{
        break;
    }
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