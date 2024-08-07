#include<bits/stdc++.h>

using namespace std;

void solve(){

    int n ;
    cin>>n;

    string st;
    cin>>st;

    map<char , int> mp;

    for( int i=0;i<st.length();i++){
        if(st[i]!='?'){
            mp[st[i]]++;
        }
    }

    int ans=0;

    for( auto it : mp){
        int num=it.second;

        if(num>=n){
            ans++;
        }
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