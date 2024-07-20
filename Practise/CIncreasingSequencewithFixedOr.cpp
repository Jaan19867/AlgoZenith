#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n ;
    cin>>n;

    vector<int> ans;
    // ham ek mask lenge 
    int mask=n;
    // aur iske  right most set bit pe jaayenge aur uski 
    // bits ki location le ke usko zero kar denge
    // aur us bit ki location pe hi answer =n , answer ke us bit 
    // ko unset karna he 

    ans.push_back(n);

    while(mask){
        // find the location of rightmost set bit 

        for(int  bit=0;bit<31;bit++){
            if(mask&(1<<bit)){
                // so bit is set 
                mask=mask&(~(1<<bit));
            ans.push_back(n&(~(1<<bit)));
            break;

            }



        }
    }

    for( auto it:ans){
        cout<<it<<" ";
    }

    cout<<'\n';
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin>>T;
    while(T--)
        solve();
}