#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n ;
    cin>>n;

    if(n%2){
        while(n--){
            cout<<3<<" ";
        }
        cout<<'\n';
        return ; 
    }else{

        cout<<1<<" "<<3<<" ";

        n-=2;
        while(n--){
            cout<<2<<" ";

        }
        cout<<'\n';
        return ; 
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