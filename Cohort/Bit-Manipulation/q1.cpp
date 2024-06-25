#include<bits/stdc++.h>

using namespace std;

void solve(){

    int n;
    cin>>n;
    string st;
    cin>>st;

    set<char> ch;

    int prefix[n+1];
    int postfix[n+1];
   prefix[0]=0;
    for( int i=0;i<n;i++){
        ch.insert(st[i]);
        prefix[i+1]=ch.size();
    }

    // now we have to build postfix;
    ch.clear();

    for( int i=n-1;i>=0;i--){
        ch.insert(st[i]);
        postfix[i+1]=ch.size();

    }

    // 
    int ans=0;

    for( int i=1;i<n;i++){
        int diff=abs(prefix[i]-postfix[i+1]);
        if(diff>=ans){
            ans=diff;
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