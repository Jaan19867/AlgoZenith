#include<bits/stdc++.h>

using namespace std;


int xori(int start,int end,int arr[]){

    int ans=1;

    for( int i=start;i<=end;i++){

        ans=ans|arr[i];

    }
    return ans; 

}

int check(int k ,int n ,int arr[]){


       for( int i=0;i<n-k;i++){

        for(int j=0;j<n-k;j++){
            if(xori(i,k+i-1,arr)==xori(j,k+j-1,arr)){
              
            }else{
                return 0 ; 
            }
        }
    }

    return 1; 

}

void solve(){
    int n; 
    cin>>n;
    int arr[n];
    for( int i=0;i<n;i++)cin>>arr[i];


    int low=1;
    int high=n;
    int ans=-1;

    if(low<=high){
        int mid=low+(high-low)/2;

        if(check(mid,n,arr)){
            ans=mid;
            high=mid-1;
        }else{
            low=mid+1;
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