// toggle the ith bit / flip ith bit 

// unset ith bit 


#include<bits/stdc++.h>

using namespace std;

void solve(){
    
    int n;
    cin>>n;

    int i;
    cin>>i;
 

int y=1<<i;
cout<<(n^y)<<'\n';
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin>>T;
    while(T--)
        solve();
}