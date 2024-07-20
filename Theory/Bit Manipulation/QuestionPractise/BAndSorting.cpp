#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n ; 
    cin>>n;
    
    int arr[n];
   bool firstfound=false; 

int ans =1; 
    for( int i=0;i<n;i++){

        cin>>arr[i];

        if(arr[i]!=i){
            
            if(!firstfound){
                firstfound=true; 
                ans=arr[i];
            }
            
            ans =ans&arr[i];
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