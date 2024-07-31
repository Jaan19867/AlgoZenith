#include<bits/stdc++.h>

using namespace std;

void solve(){
    int a , b, c; 
    cin>>a>>b>>c;
   

  

   for( int i=0;i<100000;i++){
          a=a%b;
          a*=10;
          int k=a/b;
          if(k==c){
            cout<<i+1<<'\n';
          }else if(k==0){
            cout<<-1<<'\n';
          }
   }



}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


        solve();
}