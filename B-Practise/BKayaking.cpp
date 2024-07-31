#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n ;
    cin>>n;

    int arr[n];

    for( int i=0;i<n;i++){
        cin>>arr[i];
    }

    int diff[n-1];
    sort(arr,arr+n);
    

    for( int i=0;i<n-1;i++){
        diff[i]=arr[i+1]-arr[i];

    }

    for( auto it: diff){
        cout<<it<<" ";
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