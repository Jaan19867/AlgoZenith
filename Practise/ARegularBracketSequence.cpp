#include<bits/stdc++.h>

using namespace std;

void makebracket(string& st,int num){
          

          for( int i=0;i<num;i++) st.push_back('(');
          for( int i=0;i<num;i++)st.push_back(')');

}

void solve(){
    int n ;
    cin>>n;

    for( int i=0;i<n;i++){
        // i==0 he so    n opening and then n closing 

        // 
        
        string st="";
        makebracket(st,n-i);
        

        // rightmost

        makebracket(st,i);

        cout<<st<<'\n';




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