#include<bits/stdc++.h>

using namespace std;
#define int long long 

void solve(){
    int n , s, k ; 
    cin>>n>>s>>k;



 set<int> st;


 for( int i=0;i<k;i++){
int x;
cin>>x;
    st.insert(x);

 }


int ans=s;

for( int i=0;i<=k;i++){
 
                           if(s-i>0 && st.find(s-i)==st.end()){
                               ans=i;
                               break; 
                           }
                           
                           if(s+i<=n && st.find(s+i)==st.end()){
                               ans=i;
                               break; 
                           }
}
cout<<ans<<'\n';


    
}

signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin>>T;
    while(T--)
        solve();
}