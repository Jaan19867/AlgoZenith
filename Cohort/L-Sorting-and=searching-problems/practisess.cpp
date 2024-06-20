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
    // now find k ; 



int prefixcount[n];


   for( int i=0;i<n;i++){



    if(i!=0){
  if(arr[i]==2){
        prefixcount[i] =prefixcount[i-1]+1;
    }else{
           prefixcount[i] =prefixcount[i-1];
        
    }
    }else{
        
        if(arr[i]==2){
            prefixcount[i]=1;
        }else{
             prefixcount[i]=0;
        }
    }
  
   }

   // here prefix count has been done 



    for( int i=0;i<n;i++){



if(prefixcount[i]==prefixcount[n-1]-prefixcount[i]){

    cout<<i+1<<'\n';
    return ;

}
     
    }

    cout<<-1<<'\n';
    
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin>>T;
    while(T--)
        solve();
}