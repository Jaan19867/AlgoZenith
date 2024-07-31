#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n , m ; 
    cin>>n>>m;
    int dl=m-1;
    int dr=n-m;
    if(dl>dr){
        cout<<m-1<<'\n';
        return ; 
    }else{
        cout<<m+1<<'\n';
    }
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

        solve();
}