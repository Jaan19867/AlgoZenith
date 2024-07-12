#include<bits/stdc++.h>

using namespace std;
int countsetBit(int n ){
    int count=0;

    while(n){
        count++;
        n=n&(n-1);
    }
    return count; 
}
void solve(){
    // Calculate set bit number in n 
    int n ;
    cin>>n;

    cout<<__bit_width(n)<<'\n';

    cout<<countsetBit(n);
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

        solve();
}