#include<bits/stdc++.h>

using namespace std;

void solve(){

    int n ;
    cin>>n;

    int sum=0;
    sum+=n%10;
    n=n/10;
    sum+=n%10;
    cout<<sum<<'\n';
    
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin>>T;
    while(T--)
        solve();
}