#include<bits/stdc++.h>
#define lli long long int 
using namespace std;

void solve(){
    
    int n,m;
    cin>>n>>m;

    vector<int> arrn(n,0);

    for( int i=0;i<n;i++){
        lli x;
        cin>>x;

        arrn[i]=x ;

    }


    vector<int> arrm(m,0);
    for( int i=0;i<n;i++){
        lli x;
        cin>>x;

        arrm[i]=x ;

    }


for( int j=0;j<m;j++){

    lli gcd=0;


    for( int i=0;i<=j;i++){
        gcd=__gcd(gcd,arrn[i]);
    }

    cout<<gcd<<" ";
}
cout<<'\n';



}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin>>T;
    while(T--)
        solve();
}