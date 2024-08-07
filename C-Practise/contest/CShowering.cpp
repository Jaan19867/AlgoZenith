#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n,s,m;
    cin>>n>>s>>m;
    vector<int> vt; 

    for( int i=0;i<n;i++){
        int a , b; 
        cin>>a>>b;

        vt.push_back(a);
        vt.push_back(b);


    }

    bool flag=false; 

    for( int i=2;i<vt.size();i+=2){

        int diff=vt[i]-vt[i-1];

        if(diff>=s){
            flag=true; 
            break; 
        }

    }

    int difbefore=vt[0]-0;
    int diflast=m-vt[vt.size()-1];

    if(difbefore>=s  || diflast>=s){
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

    int T;
    cin>>T;
    while(T--)
        solve();
}