// Getting all the bits of digit 


#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin>>n;

    // now hame n ke saare hi bits chhhaye

      while(n!=0){

        cout<<n%2<<'\n';
        n=n>>1;
        
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