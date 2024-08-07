#include<bits/stdc++.h>

using namespace std;

void solve(){

    int a , b, c, d; 

    cin>>a>>b>>c>>d;

    if(b>a){
        swap(a , b);
    }
    if(d>c){
        swap(c,d);
    }
    int ans=0;
    if(a<c   &&  b<d){
        cout<<0<<'\n';
    }else if(a>c && a<d  && b>d){
        cout<<2<<'\n';

    }else if(a>c && a>d){
        cout<<4<<'\n';
    }else if(a==c && b>d){
        cout<<1<<'\n';
    }else if(a==c && b==d){
        cout<<0<<'\n';
    }else{
        cout<<1<<'\n';
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