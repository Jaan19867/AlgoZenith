#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n , k ;
    cin>>n>>k;

    ///          
    int final_num=n+n;
    int lower_num=2;
    int total_num=final_num-lower_num+1;
    int max=(total_num+1)/2;
    // cout<<max<<" h";

    int ans=0;
    if(k==0){
        cout<<0<<'\n';
        return ; 
    }
    k=k-max;
    ans++;
    if(k<=0){
        cout<<ans<<'\n';
        return; 
    }
    max--;

    while(max>=1){
        k-=max;
        ans++;
        if(k<=0){
            cout<<ans<<'\n';
            return ; 
        }
         k-=max;
        ans++;
        if(k<=0){
            cout<<ans<<'\n';
            return; 
        }
        max--;
        
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