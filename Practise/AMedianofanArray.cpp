#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n ;
    cin>>n;

    vector<int> arr(n);

    for( int i=0;i<n;i++){
        cin>>arr[i];
    }

sort(arr.begin(),arr.end());


// priority_queue<int,vector<int>,greater<int>> pqright;
int mid=(n-1)/2;
int count=0;

for( int  i=mid;i<n;i++){
    if(arr[i]==arr[mid]){
        count++;
    }else{
        break; 
    }
}

cout<<count<<'\n';


    
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin>>T;
    while(T--)
        solve();
}