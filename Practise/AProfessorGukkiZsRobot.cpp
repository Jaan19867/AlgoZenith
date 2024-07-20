#include<bits/stdc++.h>

using namespace std;

void solve(){
    int a , b, c,d;
    cin>>a>>b>>c>>d;
    int da=abs(a-b);
    int db=abs(c-d);


    cout<<max(da , db)<<'\n';
    
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin>>T;
    while(T--)
        solve();
}