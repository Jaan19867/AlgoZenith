#include<bits/stdc++.h>

using namespace std;

void solve(){
    int ra , rb,ca,cb,da,db;
    cin>>ra>>rb>>ca>>cb>>da>>db;


    for( int i=1;i<=9;i++){
        bool first=false;
        bool second=false; 
        bool third=false;
        bool fourth=false;
        bool fifth=true; 

        // here x=i ;
        if(ra-i>0 && ra-i<=9){
            first=true; 
        }

        if(da-i>0 && da-i<=9){
            second=true; 
        }

        if(ca-i>0 && ca-i<=9){
            third=true; 
        }
        if(ra+ca-2*i==db){
            fourth=true;
        }
        
        if(ra-i==da-i || ca-i==da-i || ca-i==ra-i){
            fifth=false;
            
        }


        if(first && second && third && fourth && fifth){
            cout<<i<<" "<<ra-i<<'\n';
            cout<<ca-i<<" "<<da-i<<'\n';
            return ; 
        }

    }
    
    cout<<-1<<'\n';
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

        solve();
}