#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n , k ; 
    cin>>n>>k;

    string s="";

    while(n--){

    for( int i=0;i<k;i++){
        s.push_back('a'+i);
    }
    }

    cout<<s<<'\n';

    
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin>>T;
    while(T--)
        solve();
}