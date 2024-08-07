#include<bits/stdc++.h>

using namespace std;
#define int long long


int check(int k,int arr[],int n ){

    vector<int> bits(21,0);
    // freq of set bits

    for( int i=0;i<k;i++){

        for( int bit=0;bit<21;bit++){

            if((arr[i]&(1<<bit))==1){
                bits[bit]++;
            }


        }
    }


    int left=1;
    int right=k+1;
    vector<int> vt=bits;

    while(right<n){

           for( int bit=0;bit<21;bit++){

            if((arr[left-1]&(1<<bit))==1){
                vt[bit]--;
            }


        }
           for( int bit=0;bit<21;bit++){

            if((arr[right]&(1<<bit))==1){
                vt[bit]--;
            }


        }

        for( int i=0;i<21;i++){
            if(bits[i]==0 && vt[i]!=0 ){
                return 0; 
            }else if(bits[i]!=0 && vt[i]==0){
                return 0; 
            }
        }

        right++;
        left++;






    }

    return 1; 



}

void solve(){
    int n ;
    cin>>n;
    int arr[n];
    for( int i=0;i<n;i++){
        cin>>arr[i];
    }

    int low=0;
    int high=n;
    int ans=-1;
 

    while(low<high){
        int mid=(low+high)/2;

        if(check(mid,arr,n)){
            ans=mid;
            high=mid-1;

        }else{
            low=mid+1;
        }
    }


    
}

signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin>>T;
    while(T--)
        solve();
}