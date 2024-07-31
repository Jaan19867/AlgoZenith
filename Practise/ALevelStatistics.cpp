#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n ;
    cin>>n;

    int play,clear;
    play=0;
    clear=0;

    while(n--){
        int a ,b;
        cin>>a>>b;

        if(play>a){
            cout<<"NO"<<'\n';
            return ; 
        }else{
            play=a;
        }

         if(clear>b){
            cout<<"NO"<<'\n';
            return ; 
        }else{
            clear=b;
        }


        
    }

    cout<<"YES"<<'\n';
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin>>T;
    while(T--)
        solve();
}