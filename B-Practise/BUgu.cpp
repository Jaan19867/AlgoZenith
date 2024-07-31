#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n ;
    cin>>n;
    string st;
    cin>>st;

    

    int count=0;

    for( int i=0;i<n-1;i++){
         if(st[i]!=st[i+1]){


            if(count%2){
                // 01 not allowed 
                if(st[i]=='0' && st[i+1]=='1'){
                    count++;
                }
            }else{

                if(st[i]=='1'  && st[i+1]=='0'){
                    count++;
                }
            }
         }
    }

    cout<<count<<'\n';
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin>>T;
    while(T--)
        solve();
}