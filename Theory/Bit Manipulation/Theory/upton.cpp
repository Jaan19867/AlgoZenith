#include<bits/stdc++.h>

using namespace std;

int countdigit(int n){

    int count=0;

    while(n){
        // count++;
        // n=n&(n-1);
        // it will set off to last set digit ; so jitni baar count hoga utna hi hamara answer hoga , lekin dikkat ye he ki ye error de sakta he 
        // tle ka so naya technique               n ek number he   , to usse pehle jo just   2^x hoga to usse 1 to x^x-1 ka set bit hota he  x*2^x-1  
        // which is   x<<(x-1)  x*2^(x-1);               
        /// fir     2^x   to n tak ka nikaalna he ki kitna set bit he    , aur ye ham  nikaal sakte he aur isme bhi recuresion ka kaam aata he 
        //              2^x to n me left most big sabhi me set he           
        // last 2^x kaise nikaale ?       
        int x=__bit_width(n)-1;
        //   2^x   hame last   2^x wala de dega  

        count+=    x<<(x-1);         // x*(x^x-1);


        // ab last bit dekhte he 

        n=n-(1<<x);
        count+=n+1;

        // so agar number 5 bit ka tha    _ _ _ _ _   to 1 _ _ _ _   , to hamen  0 _ _  _ _   iska pehle hi nikaal lya aur jo 1  left most tha 2^x to n tak ka wo hamne 
        // just uper nikaal lya , now                  ab jo 1 _ _ _ _  ye 4 wale nikaalne he     so ham 1 ko hata denge   aur wo hamen uper hataya he 
        // ab uska count agli baar while loop me nikaal lenge 



        
    }

    return count ; 

}


void solve(){
    int n ;
    cin>>n;

    cout<<countdigit(n)<<'\n';
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

        solve();
}