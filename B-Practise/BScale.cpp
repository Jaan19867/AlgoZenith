#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n , k;
    cin>>n>>k;

    int arr[n][n];

    for( int i=0;i<n;i++){
        for( int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    // input le lya 

    vector<int> vt;

    for( int i=0;i<n;i+=k){

        int count=0;

        for( int j=0;j<n;j++){
            count++;
            if(count==k){
                vt.push_back(arr[i][j]);
                count=0;
            }

        }
    }


    for( int i=0;i<vt.size();i++){
        cout<<vt[i];
        if((i+1)%k==0){
            cout<<'\n';
        }
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