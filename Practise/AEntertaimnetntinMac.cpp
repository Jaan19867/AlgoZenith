#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin>>n;
    string st;
    cin>>st;

    if(st[0]<st[n-1]){
        // yaani lexicographical sahi he ab n even hoga to answer wahi hoga 
        // n even 
        if(n%2==0){
            cout<<st<<'\n';

        }else{
            string rt=st;
            reverse(rt.begin(),rt.end());
            st=st+rt;
            cout<<st<<'\n';

        }
    }else{
        // lexicographical nahi he 
          reverse(st.begin(),st.end());
        if(n%2==0){
            // even he 
            // to ek baar ham ise paltenge 
            // jo ki ham uper hi palat chuke he 
            // now ek aur step he isme aage 
            string rt=st;
            // now isko reverse karke laga dena he 
            reverse(rt.begin(),rt.end());
            st=st+rt;
            cout<<st<<'\n';


            
        }else{
          
            cout<<st<<'\n';

        }
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