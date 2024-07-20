#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n ;
    cin>>n;

    if(n%3==0){
        cout<<n/3<<'\n';
    }
    else if(n%3==1){
        cout<<(n+2)/2 +1<<'\n';
        
    }else{
        cout<<(n-2)/2+1<<'\n';
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