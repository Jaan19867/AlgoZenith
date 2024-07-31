#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n ;
    cin>>n;

    pair<int,int> arr[n];

    for( int i=0;i<n;i++){
        int a , b; 
        cin>>a>>b;

        arr[i]={a,b};
    }
        int ans=0;
    for( int i=0;i<n;i++){

        int x=arr[i].first;
        int y=arr[i].second;

        bool left=false;
        bool right=false; 
        bool upper=false; 
        bool down=false; 


        for( int i=0;i<n;i++){

            int first=arr[i].first;
            int second=arr[i].second;

            if(first==x){
                if(second>y){
                    upper=true; 

                }else if(second<y){
                    down=true; 
                }

                
            }

            if(second==y){

                if(first>x){
                    right=true; 
                }
                if(first<x){
                    left=true; 

                }
            }


            if(left && right && upper&& down){
                ans++;
            }
        }
    }

    cout<<ans<<'\n';
    
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

        solve();
}