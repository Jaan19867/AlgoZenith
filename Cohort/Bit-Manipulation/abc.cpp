#include<bits/stdc++.h>

using namespace std;

void solve(){
    int a1,a2,a3;
    cin>>a1,a2,a3;

    int d1=a2-a1;
    int d2=a3-a2;
    int d3=(a3-a1)/2;

    // inme se koi ek sahi d he becuae ham ek ko hi change kar sakte he 
    if((a2+d1)%a3==0){
        cout<<"YES"<<'\n';
        return ; 
    }else if((a2-d2)%a1==0){
        cout<<"YES"<<'\n';
        return ; 
    }else if((a1+d3)%a2==0){
        cout<<"YES"<<'\n';
        return ; 
    }

    cout<<"NO"<<'\n';
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin>>T;
    while(T--)
        solve();
}