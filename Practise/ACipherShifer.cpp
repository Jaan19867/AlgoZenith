#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n ; 
    cin>>n;
    string st; 
    cin>>st;

    string ans="";

    for( int i=0;i<=n;i++){


       char ch=st[i];
       i++;

       while(st[i]!=ch){
        i++;
       }
       // now equal he to ham us length tak aa gaye he 
       ans.push_back(ch);



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