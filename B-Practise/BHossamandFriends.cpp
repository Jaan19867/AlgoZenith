#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n , m;
    cin>>n>>m;
    int arr[n+1];

    // to store minimum index which is not friend of i;
    

while(m--){
    int a , b; 
    cin>>a>>b;
    if(a>b){
       int temp=b;
       b=a;
       a=b;



    }

    arr[a]=b;
}


for( int i=n-1;i>=0;i--){
    arr[i]=min(arr[i],arr[i+1]);
}

int ans=0;

for( int i=1;i<=n;i++){
    ans+=(arr[i]-i);

}
cout<<ans<<'\n';

}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin>>T;
    while(T--)
        solve();
}