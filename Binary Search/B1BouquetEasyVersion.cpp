#include<bits/stdc++.h>

using namespace std;

#

void solve(){
    int n , m ; 
    cin>>n>>m;

    int arr[n];

  
    for( int i=0;i<n;i++){
        cin>>arr[i];
       

    }

    sort(arr,arr+n);

    int left=0;
    int right=0;

    int cost=0;

    while(right<n){

        cost+=arr[right];

        

        while(cost>m && arr[left]-arr[right]>1){

         cost-=arr[left];
         left++;
        }

        right++;



       
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