#include<bits/stdc++.h>

using namespace std;
#define int long long 
void solve(){

    int n ;
    cin>>n;
    int cntodd=0;
    int cnteven=0;
    int sum=0;
   int smallestodd=INT_MAX;

    for( int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x%2){
           if(smallestodd>=x){
            smallestodd=x;
           }
            cntodd++;
        }else{
            cnteven++;
        }
        sum+=x;

    }

    if(cntodd%2==0){
        cout<<sum<<'\n';
        return ; 
    }else{
        // erase smallest odd number
        sum-smallestodd;
        cout<<sum<<'\n';
    }
    
    
}

signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin>>T;
    while(T--)
        solve();
}