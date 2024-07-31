#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n , k ;
    cin>>n>>k;

    int firstpower;
    cin>>firstpower;
    int firstwins=0;
// power , win
    queue<pair<int,int>>q;
    for( int i=1;i<n;i++){
        int x;
        cin>>x;
        q.push({x,0});

    }

    bool flag=true; 


    if(k>=n){

        cout<<n<<'\n';

    }

    while(flag){

        int secondwins=q.front().second;
        int secondpower=q.front().first;
        q.pop();
       
       if(firstpower>secondpower){
         firstwins++;
         if(firstwins==k){
            cout<<firstpower<<'\n';
            return ; 
         }

         q.push({secondpower,secondwins});
       }else{
        secondwins++;
        if(secondwins==k){
            cout<<secondpower<<'\n';
            return ; 
        }
        // queue me ab firspower andara jaayega
        q.push({firstpower,firstwins});
        firstpower=secondpower;
        firstwins=secondwins;
        
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