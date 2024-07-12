#include<bits/stdc++.h>
// ye array se nahi ho sakta ye graph se hi ho sakta he kyunki 
// 1-> 2-> 3   to 1 ka subordinate 2 bhi he aur 3 bhi aur 2 ka subordinate 3 he 
using namespace std;

void solve(){
    int n;
    cin>>n;
    int arr[n+1];
    arr[1]=n-1;

    for( int i=1;i<=n-1;i++){
        int x;
        cin>>x;
        if(x!=1){
            arr[x]++;
        }
    }

    for( int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
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