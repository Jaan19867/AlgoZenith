#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n ;
    cin>>n;

    int arr[n+1];

    for( int i=1;i<=n;i++){
        cin>>arr[i];
    }

    int killed=0;
    int count=0;

    for( int i=n;i>0;i--){
        if(count==0){
            count=arr[i];
        }else{
            killed++;
            count--;
            count=max(count,arr[i]);
        }
    }

    cout<<n-killed<<'\n';
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin>>T;
    while(T--)
        solve();
}