#include<bits/stdc++.h>

using namespace std;

void solve(){

    int n ; 
    cin>>n;
   
    set<int> st;

    for(int i=0;i<n;i++){

        int x;
        cin>>x;
        st.insert(x);

    }
    int k=st.size();
     vector<int> arr;
    for( int i=0;i<k;i++){
        arr.push_back(*st.begin());
        
        st.erase(arr[i]);

    }
     
    int ans=0;

   for( int i=0;i<k;i++){
    int diff=arr[i]+n;
    auto it=lower_bound(arr.begin()+i,arr.end(),diff);
    int number_of_index=it-(arr.begin()+i);
    ans=max(ans ,number_of_index );

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