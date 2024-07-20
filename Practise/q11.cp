#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n ;
    cin>>n;

    int arr[n];
    map<int,int>mp;
    for( int i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]]++;

    }
          int topoddtime=0;
          int x=1;
    for( auto it : mp){

        if(it->first>=x){
            x=it->fist;
            topoddtime=it->second;
        }
          
    }

    cout<<topoddtime<<'\n
;}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin>>T;
    while(T--)
        solve();
}