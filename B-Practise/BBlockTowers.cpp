#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n ;
    cin>>n;

    int arr[n];

    for( int i=0;i<n;i++){
        cin>>arr[i];
    }

    for( int i=1;i<n;i++){
        if(arr[0]<arr[i]){
            int diff=arr[i]-arr[0];
            diff=(diff+2-1)/2;
            arr[i]+=diff;
        }
    }

    cout<<arr[0]<<'\n';
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin>>T;
    while(T--)
        solve();
}