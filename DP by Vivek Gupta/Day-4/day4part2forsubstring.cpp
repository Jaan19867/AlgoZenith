#include<bits/stdc++.h>

using namespace std;

 int n ; 
 string t="0100";
 int dp[100100][8];

 int rec(int level , int lastthree){
   // pruning 
// hamen 3 last ka store karka rakha he islye pruning ki jaroorat nahi 
// he , lekin   agar 8 ki jagah 6 hota to hame  pruning rakhne ki jaroorat 
// hoti , 

   // base case 

if(level==n){
                return 1; 

}

// cache check 

if(dp[level][lastthree]!=-1){

      return dp[level][lastthree];


}

// compute 
int ans=0;

// in below code their is error here 
//             10  and 010  will act as same 

if(lastthree==2){// 010
// don't take 0

   ans=rec(level+1,5);

   // So we will not take 0    , 101  will be our last three digit 
   // at this place 


}else{

    // add a zero 
       // so pehle ham left shift karenge aur then usko 7 yaani 0111 ke 
       // saath and kar denge to uska last bit 0 ho  jaayega 

    ans=rec(level+1,(lastthree<<1|0)&7);


    // add one 
    ans+=rec(level+1,(lastthree<<1|1)&7);

}


// save and return ; 

return dp[level][lastthree]=ans; 


 }
void solve(){
    cin>>n;

    memset(dp , -1 , sizeof(dp ));

    cout<<rec(0,0)<<'\n';

    
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin>>T;
    while(T--)
        solve();
}