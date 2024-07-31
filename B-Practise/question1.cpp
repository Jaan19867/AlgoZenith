#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n ;
    cin>>n;
    if(n%4==0){
        cout<<n/4<<'\n';
    }else{
        cout<<(n-2)/4 +1<<'\n';
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