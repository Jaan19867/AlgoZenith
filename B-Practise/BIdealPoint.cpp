#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n , k ;
    cin>>n>>k;

 bool ra=false; 
 bool rb=false; 
 while(n--){
    int l , r; 
    cin>>l>>r;
    if(r<l){
        swap(l,r);
    }
    // l<r 
    if(l==k ){
        ra=true; 
    }

    if(r==k){
        rb=true; 
    }
 }

 if(rb && ra){
    cout<<"YES"<<'\n';
 }else{
    cout<<"NO"<<'\n';
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