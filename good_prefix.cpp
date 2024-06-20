#include<bits/stdc++.h>

using namespace std;

void solve(){

    int n;
    cin>>n;
    int arr[n];

    for( int i=0;i<n;i++){
        int x;
        cin>>x;
        arr[i]=x;
    }
    

    // now check number of good prefixes 


    bool goodtillNow=true;

int prefix[n];
    for( int i=0;i<n;i++){

if(i==0){
    prefix[i]=arr[i];
}else{
    // i !=0
    prefix[i]=prefix[i-1]+arr[i];

}
    }


    // prefix sum array has been created it will give the sum till that index 


    int count=0;

    for( int i=0;i<n;i++){
        if(i==0){
            if(arr[i]==0){
                count++;
            }else{
                
            }

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