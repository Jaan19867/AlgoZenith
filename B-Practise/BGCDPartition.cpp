#include<bits/stdc++.h>

using namespace std;
#define int long long 

void solve(){
    int n ;
    cin>>n;
    int arr[n];

    for( int i=0;i<n;i++){
        cin>>arr[i];
    }
   int pref[n+1];

   pref[0]=0;

   for( int i=0;i<n;i++){
    pref[i+1]=pref[i]+arr[i];
   }

   int ans=0;


   for( int i=0;i<n-1;i++){
    int left_sum=pref[i+1];
    int right_sum=pref[n]-pref[i+1];
    int curgcd=__gcd(left_sum,right_sum);
    ans=max(curgcd,ans );
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