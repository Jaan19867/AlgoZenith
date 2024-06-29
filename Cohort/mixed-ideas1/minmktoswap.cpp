#include<bits/stdc++.h>

using namespace std;

void solve(){
   int n;
   cin>>n;
   int arr[n+1];

   for( int i=1;i<=n;i++) cin>>arr[i];
   int done[n+1];
    for( int i=1;i<=n;i++) done[i]=0;
   int min_moves=0;

   for( int i=1;i<=n;i++){
if(done[i]!=1){
    int curr=arr[i];
    int num_elem=0;
    while(done[curr]!=1){

        done[curr]=1;
        curr=arr[curr];
        num_elem++;
    }
    done[curr]=1;
    min_moves+=num_elem-1;

}

   } 
cout<<min_moves<<'\n';
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin>>T;
    while(T--)
        solve();
}