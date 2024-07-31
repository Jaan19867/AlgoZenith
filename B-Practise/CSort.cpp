#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n , q; 
    cin>>n>>q;
        string a; 
        cin>>a;
        string b;
        cin>>b;
    // int prefa[26][n+1];
    // int prefb[26][n+1];

    vector<vector<int>> prefa(26,vector<int>(n+1,0));
    vector<vector<int>> prefb(26,vector<int>(n+1,0));
    
   


    for( int i=0;i<n;i++){
      prefa[a[i]-'a'][i+1]++;
      prefb[b[i]-'a'][i+1]++;
    }
    
   for( int i=0;i<26;i++){
       
       for( int j=1;j<=n;j++){
           
           prefa[i][j]+=prefa[i][j-1];
           prefb[i][j]+=prefb[i][j-1];
       }
   }
    
    // for( auto it : prefa){
        
    //     for( auto its: it){
    //         cout<<its<<" ";
    //     }
    //     cout<<'\n';
    // }
    
    
    // Now calculate the answer
    while(q--){
        int l , r; 
        cin>>l>>r;
        
        int ans=0;
        
        
            
            for( int j=0;j<26;j++){
                
                int cnta=prefa[j][r]-prefa[j][l-1];
                int cntb=prefb[j][r]-prefb[j][l-1];
                
                int num=cnta-cntb;
                if(num<0){
                    num=0;
                }
                ans+=num;
            }
            cout<<ans<<'\n';
        
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