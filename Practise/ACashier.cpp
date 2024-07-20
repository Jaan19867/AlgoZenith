#include<bits/stdc++.h>

using namespace std;

void fill(int x , int y , int arr[],int l){

    int start=x+1;
   
    while(y>0 && start<=l){
        if(arr[start]==1){
            arr[start]=0;
            start++;
            y--;
        }
    }


}

void solve(){
    int n , l , a;
    cin>>n>>l>>a;

    int  arr[l+1];
    memset(arr,1,sizeof(arr));


    for( int i=0;i<n;i++){
        int x, y ;
        cin>>x>>y;

        fill(x, y , arr,l);
    }

    // now we only need to count the continous chunk of 1

    int ans=0;
      int cnt=0;
    for( int i=1;i<=n;i++){
        if(arr[i]==1){
          cnt++;
          if(cnt==a){
            ans++;
          }
        }else{
            cnt=0;
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