#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n ;
    cin>>n;
     
     
     string st="312831303130313130313031312831303130313130313031312931303130313130313031312831303130313130313031312831303130313130313031312831303130313130313031";
// 28 31 30 31 30 31 31 30 31 30 31 31 28 31 30 31 30 31 31 30 31 30 31
// 15
// 31 28313031303131303130313129
// 31 31 28 31 30 31 30 31 31 30 31 30 31 31 29
    string us="";
 
      for( int i=0;i<n;i++){
          string ch;
          cin>>ch;
          us+=ch;
      }
      bool flag=false; 
      
     if(st.find(us)!=-1){
         flag=true; 
     }
     
  
     if(flag){
      cout<<"YES"<<'\n';
         
     }else{
         cout<<"NO"<<'\n';
         
     }
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


        solve();
}