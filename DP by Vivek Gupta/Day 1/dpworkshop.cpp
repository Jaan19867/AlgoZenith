#include<bits/stdc++.h>

using namespace std;

int n;
int x,k;

int taken[1001];
int s[1001];

int  check(int level ){

}

int rec(int level){

    // max skill i can make from [level...n-1]
    // level -> current item in  [0...n-1]

     // pruning 


     // base case 
       if(level==n){
        return 0;
       }

    //     compute 
    // loop over choice 
    // choice 1 : don't take 

    int ans=rec(level+1);


    // choice 2 : take 
    if(check(level)){
        // check we can take it or not 
        taken[level]=1;

        // moove
        rec(level+1);

        // revert
        taken[level]=0;




    }



}


void solve(){
    cin>>x>>k;
    // x is tim remaining , k number of question we can solved 

}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin>>T;
    while(T--)
        solve();
}








