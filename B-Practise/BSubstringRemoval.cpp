#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n ; 
    cin>>n;

    string st; 
    cin>>st;

    vector<vector<int>> vt(26,vector<int> (n+1,0));

    for( int i=0;i<n;i++){
        vt[st[i]-'a'][i+1]++;
    }

    for( int i=0;i<26;i++){

        for( int j=1;j<=n;j++){

            vt[i][j]+=vt[i][j-1];
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