#include<bits/stdc++.h>

using namespace std;

void solve(){
    
    int n ; 
    cin>>n;
    int arr[n];
    int insertdata[n];


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
            insertdata[i]=lis.size()-1;


        }else{
            // we will find first element greater than  or equal to x 
               
               auto it=lower_bound(lis.begin(),lis.end(),arr[i]);
               *it=arr[i];

               insertdata[i]=it-lis.begin();


        }
    }


    for( int i=0;i<n;i++){
        cout<<insertdata[i]<<" ";

    }

    cout<<lis.size()<<'\n'; 


    vector<int> final_lis; 


    int curlen=lis.size();

    for( int i=n-1;i>=0;i--){
        if(insertdata[i]==curlen){
            final_lis.push_back();
            curlen--;
        }
    }

    reverse(final_lis.begin(),final_lis.end());
    


}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin>>T;
    while(T--)
        solve();
}