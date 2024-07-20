#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n ; 
    cin>>n;
    int arra[n];
    int arrb[n];

    for( int i=0;i<n;i++)cin>>arra[i];
    for( int i=0;i<n;i++)cin>>arrb[i];

int ans=0;
int diff=0;

for( int i=0;i<n;i++){

    if(arra[i-diff]>arrb[i]){
        ans++;
        diff++;
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