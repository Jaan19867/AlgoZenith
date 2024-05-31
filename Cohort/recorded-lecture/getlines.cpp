#include<bits/stdc++.h>

using namespace std;

void solve(){

int n;
cin>>n;

//  string temp;
//  getline(cin,temp);

string arr[n];

for( int i=0;i<n;i++){
    getline(cin, arr[i]);
}

for( int i=n-1;i>=0;i--){
    
    cout<<arr[i]<<" Hellow lodu kaise he "<<'\n';
    
    
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
