// find leftmost set bit (msb )  in 32-bit integer 






#include<bits/stdc++.h>

using namespace std;

void solve(){
    
    int n;
    cin>>n;

    for( int bit=30;bit>=0;bit--){
        int j=1<<bit-1;

        if(j&n){
            cout<<bit<<'\n';
            return ;
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