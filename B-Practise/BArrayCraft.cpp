#include<bits/stdc++.h>

using namespace std;

void fillpre(int i,int arr[],int n ){

    bool flag=true; 

    for( int j=i;j<n;j++){

        if(flag){
            arr[i]=-1;
            flag=false; 
        }else{
            arr[i]=1;
            flag=true;
        }

    }
}


void fillsuffi(int i , int arr[],int n ){
    bool flag=true; 

    for( int j=i;j>=0;j--){
         if(flag){
            arr[i]=-1;
            flag=false; 
        }else{
            arr[i]=1;
            flag=true;
        }

    }
}



void solve(){
    int n , x,y;
    cin>>n>>x>>y;

    int arr[n];

    x--;
    y--;
    arr[x]=1;
    arr[y]=1;
    
    fillpre(x+1,arr,n);
     
    fillsuffi(y-1,arr,n);

    for( int i=y;i<=x;i++){

        arr[i]=1;
        


        
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