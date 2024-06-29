// Given N elements 
// Find the sum of Ai XOR Aj for all pairs of i and j 
// (k1,k2) and (k2,k1) are same pairs => count once 


#include<bits/stdc++.h>

using namespace std;

void solve(){
    long long ans=0;
    int n ; 
    vector<int> A(n+1);

    for( int i=1;i<=n;i++){
        for( int j=i+1;j<=n;j++){
            ans +=A[i]^A[j];
            
        }
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