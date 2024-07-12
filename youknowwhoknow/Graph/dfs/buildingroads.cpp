#include<bits/stdc++.h>

using namespace std;

void dfs(int node, vector<int>& vis,int n,vector<vector<int>>& adj){
    vis[node]=1;

    // traversal karenge 

    for(  auto it: adj[node]){
        if(!vis[it]){
            dfs(it,vis,n,adj);
        }
    }
}


void solve(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> adj(n+1);

    for( int i=0;i<m;i++){

      int a,b;
      cin>>a>>b;

    adj[a].push_back(b);
    adj[b].push_back(a);


        
    }

    // now adjacency list ban gayi he 

    // now travel karke dekhna he ki kitne roads unconnected he 
        int ans=0;;
        vector<int> vis(n+1,0);

        // we have to store last and then first of next call 
        vector<int> bridges;
        for( int i=1;i<=n;i++){
             if(!vis[i]){
                bridges.push_back(i);
                ans++;
                dfs(i,vis,n,adj);
             }
        }
        

       
    for (auto it : bridges) {
        cout << it << " ";
    }

    cout << '\n' << ans-1 << '\n';

    for( int i=0;i<bridges.size();i++){
        if(i!=0){
            cout<<bridges[i]-1<<" "<<bridges[i];
        }
        cout<<'\n';
    }


}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


        solve();
}