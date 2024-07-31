#include<bits/stdc++.h>

using namespace std;

void solve(){
    int a , b; 
    cin>>a>>b;
   int diff=abs(a-b);


   cout<<2*diff<<'\n';

   for( int i=b;i<=a;i++){
    cout<<i<<" ";
   }

   for( int i=a-1;i>b;i--){
    cout<<i<<" ";
   }
cout<<'\n';
   
  

}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin>>T;
    while(T--)
        solve();
}