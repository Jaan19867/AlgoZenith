#include<bits/stdc++.h>

using namespace std;

void solve(){


    int n ;
    cin>>n;
    map<int , int > mp;
    int arr[n];
    set<int> st; 
    for( int i=0;i<n;i++){
        cin>>arr[i];
        st.insert(arr[i]);
        mp[arr[i]]++;
     
    }


   int first=0;
   for( int i=0;i<=n;i++){
    auto it=st.find(i);

    if(it==st.end()){
        first=i;
    }
   }

   int second=0;

   // it will be second integer whose freq will be one 
    bool flag=false; 
    
  for( auto it: mp){
    int el=it.first;
    int freq=it.second;
    if(freq==1){
        if(flag){
            second=el;
            break; 
        }
        flag=true; 
    }

  }
    cout<<min(first , second)<<'\n';
    
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin>>T;
    while(T--)
        solve();
}