#include<bits/stdc++.h>

using namespace std;

void solve(){
    int a , b, c;
    cin>>a>>b>>c;

    int ans=0;

    // first finish c  by using b 

  if(c%2){
    c--;
  }

  // now c is even 

  int breq=c/2;

  if(breq>=b){
    b=b-breq;
    ans=ans+breq+c;

    
  }else{
    // breq kam he yaani c=6  he to b 1 hi he 
    ans=ans+b+2*b;
    b=0;
  }

  int areq=b/2;
  if(areq>=a){
    a=a-areq;
    ans=ans+areq+b;
  }else{
    // areq kam he yaani b=8 he to a=3 he 
    ans=ans+a+2*a;

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