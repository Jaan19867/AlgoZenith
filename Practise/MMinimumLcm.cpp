#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin>>n;
  
  int div=1;
    for( int i=2;i<=n/2;i++){
        // yeha pe hamen i ko a maana he aur b ko ham maanege 
        // b>a  if b%moda==0 than answer is b  other wise min answer 
        // will be 2b 
    if(n%i==0){
     div=n/i;
     // so ek answer hamara div he aur dusra break;


    }

    }
    cout<<div<<" "<<n-div<<'\n';
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin>>T;
    while(T--)
        solve();
}