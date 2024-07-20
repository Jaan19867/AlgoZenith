#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n ; 
    cin>>n;

    int cntbnchzero=0;
    int countone=0;

string st; 
cin>>st;
bool lastzero=false; 
  for( int i=0;i<n;i++){
    if(st[i]==0){
        lastzero=true; 
    }else{

        countone++;
        if(lastzero){
            cntbnchzero++;
        }
    lastzero=false; 
        
    }
  }

  cout<<countone<<" "<<cntbnchzero<<'\n';
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin>>T;
    while(T--)
        solve();
}