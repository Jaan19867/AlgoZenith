#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n , x;
    cin>>n>>x;

    int arr[n];

    for( int i=0;i<n;i++){
        cin>>arr[i];

    }

    int largest=0;
    int sum=0;
    int ans=0;
    for( int i=0;i<n;i++){
         sum+=arr[i];

         if(sum%x==0){
            sum=0;
            largest=0;
         }else{
            largest++;
            ans=max(ans , largest);
         }
    }


    ans=max(ans , largest);
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