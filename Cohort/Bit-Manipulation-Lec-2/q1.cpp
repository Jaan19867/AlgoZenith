// Problem 
// Given N elements 
// Q queries , find OR of elements in range [L,R]  for each query 


#include<bits/stdc++.h>

using namespace std;

int getanswer(int l , int r , int arr[],int n ){

int ans=0;
    for(int bit =0;bit<31;bit++){

        // now har array ke bit pe jaa ke dekhenge ki wo set he ki nahi agar set he to answer me wo bit bhi set ho jaayega 

        for( int i=0;i<n;i++){

            if(arr[i]&(1<<bit)){
                // so bit is set 
                ans +=(1<<bit);

            }

        }
    }

    cout<<ans<<'\n';
}

void solve(){
    int n ; 
    cin>>n;
    int arr[n];

    for( int i=0;i<n;i++) cin>>arr[i];


     vector<vector<int>> vt(30,vector<int>(n+1,0));
     vt[0]


    int q; 
    cin>>q;
    while(q--){

        int l , r ; 
        cin>>l>>r;

        cout<<getanswer(l,r,arr,n);
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


