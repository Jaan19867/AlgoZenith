#include<bits/stdc++.h>

using namespace std;
   int sn , tn ; 
vector<int> func(int ind,string s , string t){
     
    vector<int> vt;
    for( int i=ind ; i<ind+sn && i<tn;i++){
        
        if(t[i]==s[i-ind]){

        }else{
          vt.push_back(i);
        }
    }


}

void solve(){
 
    cin>>sn>>tn;
    string s,t;
    cin>>s>>t;
    int ans=INT_MAX;
    for( int i=0;i<=tn-sn;i++){
        if(t[i]==s[0]){
            vector<int> count=func(i,s,t);
            int sizes=count.size();
            ans=min(ans , sizes);

        }
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