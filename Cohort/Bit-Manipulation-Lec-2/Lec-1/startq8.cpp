#include<bits/stdc++.h>

   // Problem ------------------------------
    // given two numbers X and Y.
    // You can change any bit, find minimum number of bits to change to make them equal.


using namespace std;

void solve(){
    int x,x2;
    cin>>x>>x2;
    // now hame ise same banana he by changing it's bit minm

    // so ham  count karenge ki bit same he ki nahi 
    // agar nahi he for i'th bits than count++

    int count=0;

    for( int bit =0;bit<=30;bit++){
        int y=1<<bit;
        int bit_x;
        if(x&(y)){
            bit_x=1;
        }else{
            bit_x=0;
        }

        // 
        int bit_x2;
           if(x2&(y)){
            bit_x2=1;
        }else{
            bit_x2=0;
        }

        if(bit_x!=bit_x2){
         count++;
        }


    }

    cout<<count<<'\n';
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin>>T;
    while(T--)
        solve();
}