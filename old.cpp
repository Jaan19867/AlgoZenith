#include<bits/stdc++.h>

using namespace std;

void solve(){
  int n;
  cin>>n;
   
  int arr[n];
  int count_even=0;
  int count_odd=0;


  for( int i=0;i<n;i++){
    int x;
    cin>>x;
    if(x&1){
      count_odd++;
    }else{
      count_even++;
    }

  }

  // now 2 odd ka sum even hota he to odd 
  count_odd=count_odd%2;
  // here count_odd will be 1 or 0 

  if(count_odd==0){
    cout<<"YES"<<'\n';
  }else{
    cout<<"NO"<<'\n';
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