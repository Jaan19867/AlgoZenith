#include<bits/stdc++.h>

using namespace std;

void solve(){
    string st;
    cin>>st;

    set<string> sts;
    int ans=0;
    int sized=st.length();

    for( int i=0;i<st.length();i++){

        for( int j=0;j<26;j++){
            char ch='a'+j;
            string ns=st.substr(0,i)+ch+st.substr(i,sized);
            sts.insert(ns);


        }
    }

    cout<<sts.size()<<'\n';

}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


        solve();
}