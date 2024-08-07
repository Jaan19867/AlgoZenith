#include<bits/stdc++.h>

using namespace std;
  int  n , k ; 

int func(int index, int k , int arr[] ){
    
//   for( int i=1;i<=n;i++){
//       cout<<arr[i]<<" ";
//   }
//   cout<<'\n';
  
    swap(arr[index],arr[k]);
    // cout<<arr[index]<<" "<<arr[k]<<'\n';
    
    int ans=0;
    if(index!=1){
        ans++;
    }
    
    for( int i=index+1;i<=n;i++){
        
        if(arr[index]>arr[i]){
            // cout<<arr[i]<<'\n';
            ans++;
            
        }else{
            break ; 
        }
        
    }
    swap(arr[index],arr[k]);
    
    return ans; 
}

void solve(){
      cin>>n>>k;

    int arr[n+1];

    for( int i=1;i<=n;i++){
        cin>>arr[i];

    }

    // greedily the best position will be the first index   
    // because at kth index we will face the highest rating till k-1 
  

    int ans=0;

    bool isgreater=false; 
    int ind=0;
    for( int i=1;i<k;i++){
        if(arr[i]>arr[k]){
            ind=i;
            isgreater=true; 
            break; 
        }
    }
    
    if(!isgreater){
        ans=func(1,k,arr);
    }else{
        int one=func(ind,k,arr);
        int two=func(1,k,arr);
        
        // cout<<one<<" h "<<two<<'\n';
        ans=max(one,two);
        
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