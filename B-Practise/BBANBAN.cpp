#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n ;
    cin>>n;

    int start=0;
    int end=n-1;

    string st="BAN";
    while(n>1){
        n--;
        st=+"BAN";
    }

   int ans=0;

   vector<pair<int,int>> vt;
    while(start<end){

        if(st[start]=='B' && st[end]=='N'){
             vt.push_back({start+1,end+1});
             ans++;
        }
        start++;
        end--;
    }

    cout<<ans<<'\n';

    for( auto it: vt){
        cout<<it.first<<" "<<it.second<<'\n';
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