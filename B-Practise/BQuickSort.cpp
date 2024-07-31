#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n ,k;
    cin>>n>>k;

    int arr[n+1];

    for( int i=1;i<=n;i++){

        cin>>arr[i];

    }

    int target=1;
      int count=0;
    for( int i=1;i<=n;i++){

        if(arr[i]!=target){
            count++;
        }else{
            target++;
        }

    }

    // count ka ceil lena he 


    cout<<((count+k-1)/k)<<'\n';

}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin>>T;
    while(T--)
        solve();
}