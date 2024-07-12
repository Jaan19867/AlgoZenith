#include<bits/stdc++.h>

using namespace std;
// isse ham msb ki index maalum kar sakte he 
// jo count -1 he haalanki ye ham function ke help se bhi jaan sakte he 

void solve(){
    int n ; 
    cin>>n;


    int x=n;
     int count=0;

    while(x){
        count++;
        x=x>>1;

    }
    cout<<count<<'\n';
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

        solve();
}