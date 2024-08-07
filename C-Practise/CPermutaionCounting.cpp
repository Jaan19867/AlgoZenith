#include<bits/stdc++.h>

using namespace std;
#define int long long 
   int n ,k;

pair<int,int> check(int mid , int arr[],int k ){
    int rem=0;

    for( int i=1;i<=n;i++){
        if(arr[i]<=mid){
            k-=(mid-arr[i]);
            
            if(k<0){
                break; 
            }

        }else{
            rem++;
            
        }
    }

    if(k>=0){
        return {1,rem+k}; 
    }else{
        return {0,0};
    }
}

void solve(){
 
    cin>>n>>k;
    int arr[n+1];

    for( int i=1;i<=n;i++){
        cin>>arr[i];

    }


 


    int low=0;
    int high=1e18;
    int ans=-1;


    while(low<=high){

        int mid=(low+high)/2;

        int first=check(mid , arr , k ).first;
        int second=check(mid , arr , k).second;
        if(first){
            ans=mid*n-n+1; 
            ans+=second;
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    
    cout<<ans<<'\n';

}

signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin>>T;
    while(T--)
        solve();
}