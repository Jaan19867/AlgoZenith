#include<bits/stdc++.h>

using namespace std;

void solve(){

    // You are given a array of n integeres 
    // find number of subarrays with sum equal to k 
    int n;
    cin>>n;

    vector<int> vt;

    for( int i=0;i<n;i++){
        int x;
        cin>>x;
        vt[i]=x;

    }

    // build a prefix sum array 

    vector<int> ps(n,0);


    for( int i=0;i<n;i++){
      
      // out of bound in case of i=0   so 

      if(i==0){
        ps[i]=vt[i];
      }else{

       ps[i]=vt[i]+ps[i-1];
      }
    

       
    }


    for( int i=0;i<n;i++){
   cout<<ps[i]<<" ";

    }
    cout<<'\n';



    int k;
    cin>>k;

    //    ps[j]- ps[i]=sum of subarray from i+1 to j=k

    map<int,int> mp;

int ans=0;

    for( int j=0;j<n;j++){

int element=  k-ps[j];

ans += mp[element];

mp[ps[j]]++;


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