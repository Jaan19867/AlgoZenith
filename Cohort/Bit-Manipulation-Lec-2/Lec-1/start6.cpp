

// unset rightmost bit 



#include<bits/stdc++.h>

using namespace std;

void solve(){
    
    int n;
    cin>>n;

n=n&(n-1);
cout<<n<<'\n';
 

}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin>>T;
    while(T--)
        solve();
}