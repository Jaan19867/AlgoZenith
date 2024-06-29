#include<bits/stdc++.h>

using namespace std;

void solve(){
   int n;
   cin>>n;
   int arr[n];


   for( int i=0;i<n;i++){
    cin>>arr[i];
   } 

   // 

   int ans=0;

   for( int bit=0;bit<=30;bit++){

    int countsetbit=0;

    for( int i=0;i<n;i++){
        // check bit is set or not 
        int y=1<<bit;
        if(y&arr[i]){
            countsetbit++;
        }
    }

    // now calculation karni he ki answer me bit 1 he ya 0   
    // so no.of set bit is of 3n   then answer me 0 he 
    // 3n+1   than answer me 1 he 

    countsetbit=countsetbit%3;
    if(countsetbit==0){
        // ans me 0 bit add karna he 
        // do nothing 
    }else{
        // ans me 1 bit add karna he 
        // so bit ko set karna he 
      
        ans=ans|(1<<bit);


    }
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