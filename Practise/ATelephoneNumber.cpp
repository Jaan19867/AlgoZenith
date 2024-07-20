#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n ;
    string st;
    cin>>n>>st;

    if(n<8){
        cout<<"NO"<<'\n';
    }
    int count8=0;
    for( int i=0;i<n;i++){

        if(st[i]=='8'){
            count8++;
        }

    }

    if(count8==0){
        cout<<"NO"<<'\n';
    }else{
        cout<<"YES"<<'\n';
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