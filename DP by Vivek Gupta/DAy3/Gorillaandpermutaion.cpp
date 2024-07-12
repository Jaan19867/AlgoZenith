#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n , m , k ; 

    cin>>n>>m>>k;

    for( int i=n;i>m;i--){
        cout<<i<<" ";
    }

    // now m tak ham aa gaye he i=m+1 he jo ki gi me abhi tak 0 he 
    // so ham gi me kam number chhahenge 
for( int i=1;i<=m;i++){
    cout<<i<<" ";
}
cout<<'\n';

}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin>>T;
    while(T--)
        solve();
}