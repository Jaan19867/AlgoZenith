#include<bits/stdc++.h>

using namespace std;

void solve(){

    int n ;
    cin>>n;

    int arr[n];
     int numeven=0;
     int numodd=0;

    int evenlargest=0;
    int oddlargest=0;
    for( int i=0;i<n;i++){
        cin>>arr[i];
    
        if(arr[i]&1){
            oddlargest=max(oddlargest,arr[i]);
            numodd++;
        }else{
            numeven++;
            evenlargest=max(evenlargest,arr[i]);

        }

    }



    if(numeven==n || numodd==n){
        cout<<0<<'\n';
    }

    // here we have atlease one odd ;

    int ans=0;

    while(oddlargest <  evenlargest){
        oddlargest=oddlargest+evenlargest;
        ans++;
    }

    ans+=numeven;

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