#include<bits/stdc++.h>

using namespace std;


bool check(int row,int col){
        for( int i=0;i<row;i++){
            int prow=i;
            int pcol=queen[i];

            // ab ham har row me jaa ke check kar rahe he ki present 
            // level me jo he wo rakh sakte he ki nahi 
            // aur har row me queen ek hi jagah hogi wo pcol se nikaal rahe he

            if(pcol==col || abs(prow-row)==abs(col-pcol)){
                return 0;
            }


        }

        return 1; 
        // because hamne har neeche ke level ke lye check kar lya he 

}


int queen[20];
// above is to know where in ith row we have placed  our queen  because ek row me ek hi queen aa sakti he , smjhe 
int rec(int level,int n){
// rec -> number of ways to populate 
// level -> row in which we are placing the queen 


// pruning 

// base case 

if(level==n){
    return 1; 
}

// compute 

int ans=0;

for( int col=0;col<n;col++){

    if(check(level,col)){
        // agar 1 he to place karna he 
        queen[level]=col;
        // now state change karna he 
        // because ham calculate kar chhuke he 
       
       // explore the option 
       ans+=rec(level+1,20);
       
       // revert placing the queen 
       queen[level]=-1;

    }
}

return ans; 

// return 

}

void solve(){
    
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    memset(queen,-1,sizeof(queen));
    int T;
    cin>>T;
    while(T--)
        solve();
}