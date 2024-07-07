#include<bits/stdc++.h>

using namespace std;

void solve(){
    // it's very easy question ye hame pehle sochna chhahye tha
    // sliding window me k size ki window lenge aur minimum white search
    // karenge 

    int n,k;
    cin>>n>>k;

    string st;
    cin>>st;

    int start=0;
    int end=0;
    int minwhite=0;
    while(end-start<k){
          if(st[end]=='W'){
            minwhite++;
          }
          end++;
    }
  int ans=minwhite;

    while(end<n){

        if(st[end]=='W'){
            minwhite++;
        }

        if(st[start]=='W'){
            minwhite--;
        }
        start++;
        end++;
        ans=min(minwhite,ans);

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