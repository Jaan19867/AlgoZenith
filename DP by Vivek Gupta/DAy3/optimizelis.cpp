#include<bits/stdc++.h>

using namespace std;

void solve(){
    
    int n ; 
    cin>>n;
    int arr[n];

    for( int i=0;i<n;i++)cin>>arr[i];

    vector<int> lis ; 

    for( int i=0;i<n;i++){
        if(lis.empty() || lis.back()<arr[i]){
            // to wo element pure array se bada he to ham usko 
            // current lenght of lis me se kisi bhi index pe nahi daal 
            // sakte because uspe to chhoti value hi aayegi 
            // because lenght same he to ham chhoti value ko hi prefer karenge 
            // so agar lis ka aakhri el arr[i ] se chhota he yaani arr[i]  sabse bada he so index increase hogi abhi 


            lis.push_back(arr[i]);


        }else{
            // we will find first element greater than  or equal to x 
               
               auto it=lower_bound(lis.begin(),lis.end(),arr[i]);
               *it=arr[i];

        }
    }

    cout<<lis.size()<<'\n'; 


}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin>>T;
    while(T--)
        solve();
}