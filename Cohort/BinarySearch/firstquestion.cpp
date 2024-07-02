#include<bits/stdc++.h>

using namespace std;


// find first 1 [0,0,1,1,1,1,1,1,1];


void solve(){
    int n;
    cin>>n;

    int arr[n];

    for( int i=0;i<n;i++) cin>>arr[i];

    // now binary search lagana he wo bhi standard wala 
    int l=0;
    int h=n-1;
    int ans=-1;
    // initiate un value se karna he jo he for ans= wo jab koi bhi 1 na ho 


    while(l<=h){
        int mid=(l+(h-l))/2;

        if(arr[mid]==1){
            ans=mid;
            h=mid-1;
        }else{
           l=mid+1;
        }
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