#include<bits/stdc++.h>

using namespace std;

bool check ( int i , int x , int y , int arr[]){
       
    for( int j=1;j<=x;j++){
            if(arr[i-j]<=arr[i]){
                return false; 
            }
    }

    for( int j=1;j<=y;j++){

        if(arr[i+j]<=arr[i]){
            return false; 
        }
    }

    return true; 
}

void solve(){
    int n , x, y;
    cin>>n>>x;

    int arr[n];

    for( int i=0;i<n;i++)cin>>arr[i];

    for( int i=x;i<n-y;i++){
        if(check(i,x,y,arr)){
            cout<<i+1<<'\n';
            return ;
        }
    }
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

  
        solve();
}