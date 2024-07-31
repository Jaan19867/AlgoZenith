#include<bits/stdc++.h>

using namespace std;

  int n , c;
int check(int mid , int arr[]){
   int count=0;
   int first=arr[0];
   
   for( int i=0;i<n;i++){
   if(arr[i]-first>=mid){
    count++;
    first=arr[i];
   }
       
   }


   if(count>=c){
    return 1; 
   }else{
    return 0;
    
   }

}

void solve(){
   
    cin>>n>>c;

    int arr[n];

    for( int i=0;i<n;i++){
        cin>>arr[i];
    }

    sort(arr,arr+n);



    int low=0;
    int high=arr[n-1]-arr[0];
    int ans=high;

    while(low<=high){
        int mid=(low+high)/2;

        if(check(mid , arr)){

            ans=mid;
            high=mid-1;


        }else{
            low=mid+1;
        }
    }

    return ans; 

    



    
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin>>T;
    while(T--)
        solve();
}