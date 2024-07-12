#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n , k;
    cin>>n>>k;
    int arr[k];

    for( int i=0;i<k;i++)cin>>arr[k];

    sort(arr,arr+k);
    // array ko sort kar lya he than we have to use our iteration method 

    int ans=0;
    for( int i=0;i<k-1;i++){
        if(arr[i]==1){
            ans++;
        }else{
            ans+=arr[i]-1+arr[i];

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