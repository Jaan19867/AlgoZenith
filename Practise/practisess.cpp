#include<bits/stdc++.h>

using namespace std;

void solve(){
    // firstly we will moove to y then see x2 is on the left side or not 

    // as usual koi bhi question ho usko hisso me aur step me baat lo 

    int a,b,c,d;
    cin>>a>>b>>c>>d;

    // we can't moove downward 

    if(d<b){
      cout<<-1<<'\n';
      return ; 
    }

    // now try to reach at y=d first 

    // b==d   than , a+d-b
    // now check a+d-b   is on right 
    if(a+d-b <c){
      cout<<-1<<'\n';
      return ; 
    }

    // now count the answer 
    cout<<a+2*d-2*b-c<<'\n';
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin>>T;
    while(T--)
        solve();
}