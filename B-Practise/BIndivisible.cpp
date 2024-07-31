#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n ;
    if(n%2){
        cout<<-1<<'\n';
        return ; 
    }else{

        int arr[n];
        for( int i=1;i<n;i++){
            arr[i]=1;
        }
        for( int i=0;i<n-1;i+=2){
            swap(arr[i],arr[i+1]);
        }

        for( auto it: arr){
            cout<<it<<" ";
        }
        cout<<'\n';
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