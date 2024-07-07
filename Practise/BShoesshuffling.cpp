#include<bits/stdc++.h>

using namespace std;

void help(int start , int end , int arr[],vector<int>& ans ){

        ans.push_back(end);
    while(start<end){
        ans.push_back(start);
        start++;
    }

}

void solve(){
    int n;
    cin>>n;
    int arr[n+1];
    vector<int> ans; 
    for( int i=1;i<=n;i++)cin>>arr[i];
    int start=1;
    int end=1;

    for( int i=0;i<n;i++){

        if(arr[start]==arr[end]){
            end++;
        }

        if(arr[start]!=arr[end]){
            if((end-start)==1){
                cout<<-1<<'\n';
                return ; 
            }else{
                help(start,end,arr,ans);
            }
        }

    }

    // to handle last n 
    if(arr[start]!=arr[end-1]){
            if((end-start)==1){
                cout<<-1<<'\n';
                return ; 
            }else{
                help(start,end,arr,ans);
            }
        }

        return ans; 

}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin>>T;
    while(T--)
        solve();
}