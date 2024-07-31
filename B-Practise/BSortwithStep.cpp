#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;

    int arr[n+1];

    for( int i=1;i<=n;i++){
        cin>>arr[i];
    }

    int count=0;

    for( int i=1;i<=n;i++){
        if(arr[i]%k!=0){
           count++;
        }
    }

    if(count==0){
        cout<<0<<'\n';
    }else if(count==2){
        cout<<1<<'\n';
    }else{
        cout<<-1<<'\n';
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