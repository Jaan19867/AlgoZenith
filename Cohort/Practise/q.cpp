#include<bits/stdc++.h>
#define int long long 

using namespace std;

void solve(){
    int n;
    cin>>n;
    int arr[n];

    for( int i=0;i<n;i++){
        int x;
        cin>>x;
        arr[i]=x;
    }

    // now we have derived array 

    vector<int> vt;

    for( int i=0;i<n;i++){
        if(i==0){
            vt.push_back(arr[i]);

        }else{
            vt.push_back(1);
             vt.push_back(arr[i]);
            
        }
    }


    cout<<vt.size()<<'\n';

    for( int i=0;i<vt.size();i++){
        cout<<vt[i]<<" ";
    }
    cout<<'\n';

}

signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin>>T;
    while(T--)
        solve();
}