#include<bits/stdc++.h>

using namespace std;

int rec( int k , int n ){

    if(n==k){
        return 1; 
    }

    int sol=0;

    sol+=k-1;

    sol+=rec( k,n-k+1);

    return sol; 
}

void solve(){
    int n , k ; 
    cin>>n>>k;


    cout<<rec( k,n);
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin>>T;
    while(T--)
        solve();
}