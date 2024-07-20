#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n ;
    cin>>n;

    n =2*n-2;

vector<string> vt;
    while(n--){
        string st;
        cin>>st;

        if(st.length()==n-1){
          vt.push_back(st);
        }


    }
 
      reverse(vt[1].begin(),vt[1].end());

      if(vt[0]==vt[1]){
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