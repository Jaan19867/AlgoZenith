#include<bits/stdc++.h>

using namespace std;

int check(int x){
    // find the number just greater than x which is power of 2 
    if(x&(x-1)==0){
        return x; 
    }else{

        // find the bit size of x ;
        int num=x;
        int count=0;
        while(num){
            count++;
            num=num>>1;

        }
        return 1<<count;

    }
}

void solve(){
   int n ;
   cin>>n;
   int arr[n+1];

   for( int i=1;i<=n;i++){
    cin>>arr[i];
   } 

   int ans=0;
   map<int,int> mp;


  for( int i=1;i<=n;i++){

    int req=check(arr[i]);

    if(req==arr[i]){
        continue;
    }else{

        int required=req-arr[i];
        mp[i]=required;
        ans++;
    }
   

  }

  cout<<ans<<'\n';

  for( auto it: mp){
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