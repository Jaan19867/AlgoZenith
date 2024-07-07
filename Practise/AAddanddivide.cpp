#include<bits/stdc++.h>

using namespace std;

void solve(){
    int a,b;
    cin>>a>>b;

    int ans=INT_MAX;

    for( int i=0;i*i<=a;i++){

        // ab number of steps count karna he 
        int step=0;
        // jo i add karenge wo b ko increase karne ka he
        step +=i;
        // in first case i=0; so here step will be 0 

        int num=a;

        while(num>0){
            // ab har baar step badha denge 
            step++;
            num=num/(b+i);

        }

        ans=min(ans,step);
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