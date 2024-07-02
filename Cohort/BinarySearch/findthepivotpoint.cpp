#include<bits/stdc++.h>

using namespace std;
// so jo rotated sorted array wala problem he jo ki bahut famous he 
// it will come in your interview 100% 

 int check(int mid, int arr[]){

    if(arr[mid]<arr[0]){
        return 1;
    }else{
        return 0;
    }
 }
 
void solve(){
    int n;
    cin>>n;
    int arr[n];
    for( int i=0;i<n;i++)cin>>arr[i];

    int l=0;
    int h=n-1;
    int ans=0;

    while(l<=h){
        int mid=l+(h-l)/2;

        if(check(mid,arr)){
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