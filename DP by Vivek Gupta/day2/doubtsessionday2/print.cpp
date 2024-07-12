#include<bits/stdc++.h>

using namespace std;
      
  void printset(int level,int left,vector<int>& cur ){

    if(level==n){
// jab ham base level pe pahuchenge to  print kar denge cur ko 
for( auto it: cu){
    cout<<it<<" ";
}
cout<<'\n';
return ; 
    }

    if(rec(level+1,left)==1){  // don't take  
        printset(level+1,left,cur);
    }else if(rec(level+1,left-x[level])){ 
         // take 

         cur.push_back(x[level]);
        printset(level+1,left-x[left],cur);
          // agar reference se pass kar rahe he to yaani ek hi 
          // vector he jo har jagah paas ho raha he 
          // aur rec tree ke neeche bhi same vector use ho raha he 
          cur.pop_back();
    }

  }

void solve(){
    
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin>>T;
    while(T--)
        solve();
}