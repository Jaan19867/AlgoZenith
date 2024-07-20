#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n , x , y ; 
    cin>>n>>x>>y;

    int arr[n];
    memset(arr,1,sizeof(arr));


    for( int i=0;i<n;i++){
        if(arr[i]==x || arr[i]==y){
            arr[i]=0;
        }
    }

    for( int i=0;i<n;i++){
        if(arr[i]==x){
            if(arr[i-1]!=0){
                arr[i-1]=-1;
            }
        }else if(arr[i]==y){
            if(arr[i+1]!=0){
                arr[i+1]=-1;
            }
        }
    }

    for( auto it: arr){
        cout<<it<<" ";
    }
    cout<<'\n';
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin>>T;
    while(T--)
        solve();
}