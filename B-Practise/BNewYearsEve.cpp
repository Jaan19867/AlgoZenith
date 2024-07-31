#include<bits/stdc++.h>

using namespace std;
#define int long long 

void solve(){
                  int   n , k ;

                  cin>>n>>k;

                  int num=0;

                  while(n){
                    num++;
                    n=n>>1;
                  }
                 if(k==1){
                     cout<<n<<'\n';
                 }else{
                     int t=1;
                     cout<<(t<<num)-1<<'\n';
                 }
}

signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

        solve();
}