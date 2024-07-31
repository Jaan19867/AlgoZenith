#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n , x;
    cin>>n>>x;

    int arr[n];
    int sum=0;

    for( int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];

    }

    int prefix[n+1];
    prefix[0]=0;

    for( int i=0;i<n;i++){
        prefix[i+1]=prefix[i]+arr[i];
    }

    int ans=n;

    for( int i=0;i<=n;i++){
      if((sum-prefix[i])%x!=0){
        ans=n-i;
        break; 
      }
    }
    

    // yehi suffix ke saath bhi karna padega 

    int suffix[n+1];
       suffix[0]=0;
    for( int i=n-1;i>=0 ;i--){
        suffix[n-i]=suffix[n-i-1]+arr[i];
    }


    for( int i=0;i<=n;i++){
        if((sum-prefix[i])%x!=0){
            ans=max(ans,n-i);
            return ; 
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