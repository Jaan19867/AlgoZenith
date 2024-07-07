#include<bits/stdc++.h>

using namespace std;

void solve(){
    int a , b; 
     int ans=0;
    while(a>0){
       if(a%b==0){
        b=b+1;
        ans++;
       }else{
        a=a/b;
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