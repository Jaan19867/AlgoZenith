#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n ; char ch;
    string st;
    cin>>n>>ch>>st;
   st=st+st;

    int p=0;
     int ans=0;
     for( int i=n+n-1;i>=0;i--){
        if(st[i]=='g'){
            p=i;

        }

        if(st[i]==ch){
           ans=max(ans,p-i);

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