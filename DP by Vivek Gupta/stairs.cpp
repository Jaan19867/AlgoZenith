#include<bits/stdc++.h>

using namespace std;
int n;

int rec(int level ){
    // ret -> number of way to N if we are at start 
    // level -> stair i am at 
    // pruning 
//  when we cross the level 
if(level>n){
    return 0;
}

   // base case 
   if(level==n){
      return 1; 
      // counting ka swaaal he to return 1 ya 0 hi hoga 

   } 
  // loop over all choices : 

    int ans=0;
  for( int step=1;step<=3;step++){


    // now isko check karenge , ye step same he jaise ham que me karte the ya dfs me karte the because dfs bhi to recursive hi he 
    // same logic applied here 

    // is place pe hi calculation hogi jo honi hogi 
    
    if(level+step<=n){
        int ways=rec(level+step);
        ans+=ways;

    }
  }

  return ans; 
  // for this level ; 

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