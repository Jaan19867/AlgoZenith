#include<bits/stdc++.h>

using namespace std;

void solve(){

    int n  ,m ; 
    cin>>n>>m;
    // n number of zero 
    // m number of one 

   if(m>=n-1 && (m+1)/2-1 <=n){

   }else{
    cout<<-1<<'\n';
   }
   

   if(n==m || n==m-1){
    // number of one is equal to m-1
    int total=m+n;
    bool flag=true; 
    while(total--){

        if(flag){
            cout<<0;
            flag=false; 
        }else{
            cout<<1;
            flag=true; 
        }

    }

   }else{


    while(m>n+1){
        cout<<1;
        m--;
        cout<<1;
        m--;
        cout<<0;
        n--;
    }

       int total=m+n;
    bool flag=true; 
    while(total--){

        if(flag){
            cout<<1;
            flag=false; 
        }else{
            cout<<0;
            flag=true; 
        }

    }

    
   }


    
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

      
        solve();
}