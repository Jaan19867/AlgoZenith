#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n ; 
    cin>>n;

    for( int i=1;i<=n;i++){
        if((i^n)<=n){
            cout<<i<<" "<<i^n<<'\n';
        }
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