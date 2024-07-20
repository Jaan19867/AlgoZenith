#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n ; 
    cin>>n;

    int weight, endurance ; 
    cin>>weight>>endurance;

    n--;
     int ans=INT_MIN;

     

    while(n--){
        int a , b; 
        cin>>a>>b;

        if(a>=weight && b>=endurance){
            cout<<-1<<'\n';
            return ; 
        }

        if(b>=endurance){
            ans=max(ans,a );
        }


    }

 if(ans==INT_MIN){
    cout<<-1<<'\n';
 }else{
    cout<<ans+1<<'\n';
 }
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin>>T;
    while(T--)
        solve();
}