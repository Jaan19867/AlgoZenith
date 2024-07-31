#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n ;
    cin>>n;

    int arr[n*n];
    int bottom=1;
    int top=n*n;

    for( int i=0;i<n*n;i++){
        if(i%2){
            arr[i]=top;
            top--;
        }else{
            arr[i]=bottom;
            bottom++;
        }
    }

    for( auto it: arr){
        cout<<it<<" ";
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