#include<bits/stdc++.h>
// number greater than x
using namespace std;
 
 int check(int mid,int x,int arr[]){
      if(arr[mid]>=x){
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

    // binary search lagana he , wo number dhoondhna he jo ki x se bada he ya uske barabar he to ye lower_bound bhi de dega 
    int x;
    cin>>x;

    int l=0;
    int h=n-1;
    int ans=-1;

    while(l<=h){
        int mid=l+(h-l)/2;

        if(check(mid,x,arr)){
         // ham iske andar he yaani check ne 1 return kya he 
        //    to arr[mid]  is gretaer than x so possible answer
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