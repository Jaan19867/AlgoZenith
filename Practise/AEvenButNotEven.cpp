#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n ;
    cin>>n;

    int num;
    cin>>num;

    int cntodd=0;

    int k=0;
    vector<int> odd;

    while(k){
        if(k%2){
            cntodd++;
            odd.push_back(k%10);

        }

        k=k/2;

    }

    if(cntodd<=1){
        cout<<-1<<'\n';
    }

    reverse(odd.begin(),odd.end());
       int ans=0;
   ans+=odd[0]*10;
   ans+=odd[1];

   cout<<ans<<'\n';




    // now ab hame ye do odd number ko print karna he




    


              


}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin>>T;
    while(T--)
        solve();
}