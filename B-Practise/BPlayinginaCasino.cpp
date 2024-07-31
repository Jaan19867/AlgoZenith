#include<bits/stdc++.h>

using namespace std;



void solve(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> vt(n,vector<int> (m,0)); 
    for( int i=0;i<n;i++){

        for( int j=0;j<m;j++){
            int x; 
            cin>>x;
            vt[i][j]=x;
        }
    }

       for( int i=0;i<n;i++){

        for( int j=0;j<m;j++){
           cout<<vt[i][j]<<" ";
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