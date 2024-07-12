#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n ;
    cin>>n;
    int arr[n];

    for( int i=0;i<n;i++){
        cin>>arr[i];
    }

    int l,r;
    cin>>l>>r;
  int ans=0;
    for( int bit=0;bit<=30;bit++){
          int countsetbit=0;

        for( int i=l;i<=r;i++){

            if(arr[i]&(1<<bit)){
                countsetbit++;
                break;
            }

        }

        if(countsetbit>0){
            ans =ans|(1<<bit);

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