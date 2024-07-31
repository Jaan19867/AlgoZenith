#include<bits/stdc++.h>

using namespace std;

int dist(int x , int y ){
    int d=x*x+y*y;
    return sqrt(d);
}

void solve(){
    int br,bd;
    cin>>br>>bd;
    int n ;
    cin>>n;
    int ans=0;

    for( int i=0;i<n;i++){
        int x,y,r;
        int d=dist(x,y);

        if(d+r<=br && d-r>=br-bd){
            ans++;
        }
    }
    cout<<ans<<'\n';
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


        solve();
}