#include<bits/stdc++.h>

using namespace std;

void solve(){

    int n , m ,k;
    cin>>n>>m>>k;

    int a[n];
    int b[m];
     

     int maxia=0;
     int maxib=0;
     int mina=INT_MAX;
     int minb=INT_MAX;
    int sum=0;
     for( int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
        maxia=max(a[i],maxia);
        mina=min(a[i],mina);
     }

     for( int i=0;i<m;i++){
        cin>>b[i];
        maxib=max(b[i],maxib);
        minb=min(b[i],minb);
     }


     if(maxia>=maxib && mina<minb){
     
     if(k%2){
        sum-=mina+maxib;
     }else{
           
           sum-=maxia+maxib;
     }

     }else if(maxia<maxib && mina<minb){
        if(k%2){
              sum-=mina+maxib;

        }else{

        }
     }else{
        if(k%2){

           sum-=mina+maxib;
        }else{
            sum-=mina+minb;
        }

     }

     cout<<sum<<'\n';

    
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin>>T;
    while(T--)
        solve();
}