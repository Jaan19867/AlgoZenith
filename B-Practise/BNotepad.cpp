#include<bits/stdc++.h>

using namespace std;

void solve(){
            int n ;
            cin>>n;

            string st;
            cin>>st;

            set<string> sts;

            for( int i=0;i<n-1;i++){
                   

                string tem="";
                 

                tem.push_back(st[i]);
                 tem.push_back(st[i+1]);
                 if(sts.find(tem) !=  sts.end()){
                    cout<<"YES"<<'\n';
                 }

                 if(st[i]==st[i+1]){
                    i++;
                 }
               
                

                

            } 

            cout<<"NO"<<'\n';
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin>>T;
    while(T--)
        solve();
}