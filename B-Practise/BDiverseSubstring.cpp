#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n ;
    cin>>n;
    string st;
    cin>>st;
   
    int ans=0;
   for( int i=0;i<n;i++){

    map<char , int> mp;
    int maxfreq=0;
    for( int j=i;j<=i+100 && j<n;j++){

        // check individually for each susbstring weather they are 
        // diverse or not 

        char ch=st[j];
        mp[ch]++;
        maxfreq=max(maxfreq,mp[ch]);
        
        if(maxfreq<=mp.size()){
            ans++;
        }



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