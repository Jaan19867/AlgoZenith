// check if ith bith is set or not 


#include<bits/stdc++.h>

using namespace std;

void solve(){
    
    int n;
    cin>>n;

    int i;
    cin>>i;
    // check ith bit is set or not 


    // target 0000010000    and 1 is at place of ith bit fir and kar 
    // ke check kar lenge 


    int y=1<<i;
    cout<<y&n<<'\n';
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin>>T;
    while(T--)
        solve();
}