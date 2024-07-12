#include<bits/stdc++.h>
#define MAX 202020
using namespace std;
#define int long long 
vector<vector<int>> adj(MAX);

int dfstree(int node, vector<int>& cats,int nc,int m ,vector<int>& vis){

    if(cats[node]){
        nc++;
        if(nc>m){
            return 0;

        }
    }
    
    if(cats[node]==0){
        nc=0;
    }

    if(adj[node].size()==0){
     
        return 1; 
    }


    // ab traverse karna he 

    int ans=0;
    // to check whether it's flag or not 
    bool flag=1;
    for( int i=0;i<adj[node].size();i++){


        int adjNode=adj[node][i];
        if(!vis[adjNode]){
            flag=0;
        ans+=dfstree(adjNode,cats,nc,m,vis);
        }

    }

    if(flag){
        return 1; 
    }
    return ans; 

}

void solve(){
    int n,m;
    cin>>n>>m;
vector<int> cats(n+1);

for( int i=1;i<=n;i++){
    cin>>cats[i];
}
vector<int> vis(n,0);
for( int i=1;i<=n-1;i++){

    // edges call honge 
    int a ,b ;
    cin>>a>>b;
  
    // a se b he so a parent he aur b uska child he 
    // parent ek hi ho sakta he 
    adj[a].push_back(b);
    adj[b].push_back(a);


}

// so ab ham adjacency lista bana chhuke he 

// now ab dfs call karna padega // aur ye tree ka swaal he to 
// tree me saare component mile hi hote he 
int nc=0;

cout<<dfstree(1,cats,nc,m,vis)<<'\n';


}

signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

        solve();
}