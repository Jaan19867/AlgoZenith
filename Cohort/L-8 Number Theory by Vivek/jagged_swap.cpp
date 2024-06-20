#include<bits/stdc++.h>

using namespace std;


bool isOnezero(int num){
    int non_zero=0;


    while(num){
        if((num%10)!=0){
            non_zero++;
        };
        num =num/10;


    }

    if(non_zero==1){
        return true;
    }else{
        return false;
    }

}

void solve(){

    int n;
    cin>>n;

   
  int arr[999999];
  int size=sizeof(arr)/sizeof(arr[0]);
  memset(arr,0,size);


    for( int i=1;i<=size;i++){

        if(isOnezero(i)){
          arr[i]=1;
        }
    }

  // now array me hamne uspe dekh lya he jo ki round wale he ki nahi usko hamne mark one kya he 

  int count=0;
  for( int i=1;i<n;i++){
    if(arr[i]==1){
        count++;
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