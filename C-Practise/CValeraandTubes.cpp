#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n , m , k ;
    cin>>n>>m>>k;

    int totalcell=n*m;
    int pr=1;
    int pc=1;


   for( int i=0;i<n*m;i++){

    // calculate row 
     cout<<i/m+1<<" "<<i%m+1<<'\n';
   }
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


        solve();
}