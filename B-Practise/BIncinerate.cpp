#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n , power;
    cin>>n>>power;

    int arr[n];
    int strength[n];

    for( int i=0;i<n;i++){
        cin>>arr[i];
    }

    for( int i=0;i<n;i++){
        cin>>strength[i];
    }

    pair<int,int> final[n];

    for( int i=0;i<n;i++){
        final[i]={arr[i],strength[i]};

    }

    sort( final,final+n);

for( auto it: final){
    cout<<it.first<<" "<<it.second<<'\n';
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