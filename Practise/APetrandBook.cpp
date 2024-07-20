#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n ;
    cin>>n;

    int count=0;

    for( int i=0;i<7;i++){
        int x;
        cin>>x;
        count+=x;
        if(count>=n){
            cout<<i+1<<'\n';
            break;
        }
    }

    cout<<-1<<'\n';
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

 
        solve();
}