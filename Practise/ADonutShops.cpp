#include<bits/stdc++.h>

using namespace std;

void solve(){

    int a , b, c;

    cin>>a>>b>>c;

    if(a>=c){
        cout<<-1<<" "<<b<<'\n';
    }else{

        if(c/b>=a){
            cout<<1<<" "<<-1<<'\n';
        }else{
            cout<<a<<" "<<b<<'\n';
        }
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