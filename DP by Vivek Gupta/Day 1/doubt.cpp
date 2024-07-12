#include<bits/stdc++.h>

using namespace std;


int getvalue(int a , int b , int c){
    int  x=a*100000+b*1000+c;
    return x; 

}

// now how to extract a , b , c ? 
// x%1000 =>c
//    (x/1000)%100 => b 
//  x/100000=> a 



// so jo 4 question the quiz ke aakhri wale me option 2 and 3 bhi sahi tha 
// why because ham cache kar rahe he un ko aur ye ham kar sakte he 
// lekin extract bhi karna hoga 
//   like     a1a2b1b2c1c2 =x
// dp[x]; 
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