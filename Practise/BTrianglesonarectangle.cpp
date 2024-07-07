#include<bits/stdc++.h>

using namespace std;

void solve(){
    int w,h;
    cin>>w>>h;

    int n1;
    cin>>n1;
    int arr[n1];
    for( int i=0;i<n1;i++) cin>>arr[i];

     int n2;
    cin>>n2;
    int arr2[n2];
    for( int i=0;i<n2;i++) cin>>arr2[i];
   
    int n3;
    cin>>n3;
    int arr3[n1];
    for( int i=0;i<n3;i++) cin>>arr3[i];

     int n4;
    cin>>n4;
    int arr4[n4];
    for( int i=0;i<n4;i++) cin>>arr4[i];
   

   int ans=INT_MIN;

   // ab ham har base se check karenge 

//    for arr , arr2 iska height same he   h same he that is h
// for arr3   and arr4  iska height same he    w .


ans=max(ans,(arr[n1-1]-arr[0])*h);
ans=max(ans,(arr[n2-1]-arr[0])*h);
ans=max(ans,(arr[n3-1]-arr[0])*w);
ans=max(ans,(arr[n4-1]-arr[0])*w);

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