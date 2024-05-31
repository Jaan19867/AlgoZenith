#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin>>n;


// array is given and find pair of i,j in which 
//   i<j   and A[i+A[j]=k;


    vector<int> vt(n,0);

    for( int i=0;i<n;i++){
        int x=0;
        cin>>x;
        vt[i]=x;
    };
int k;

cin>>k;

// the brue force approach is )(n*n)
// by using map it is 
unordered_map<int,int> mp;

long long int ans=0;
for( int j=0;j<n;j++){
// here through condition we are just checking how many time 
// in past it has been occur 
    ans +=mp[k-vt[j]];

    mp[vt[j]]++;


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