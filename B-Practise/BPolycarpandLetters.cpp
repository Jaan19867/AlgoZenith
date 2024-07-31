#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n ;
    cin>>n;
    string st; 

    cin>>st;

    int ans=0;
    int d=0;
    set<char>sts;

    for( int i=0;i<n;i++){

        if(st[i]>=65 && st[i]<=90){
            int el=sts.size();
            ans=max(ans , el);
            sts.clear();


        }else{
            sts.insert(st[i]);


        }
    }

    int el=sts.size();
    ans=max(ans , el);
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