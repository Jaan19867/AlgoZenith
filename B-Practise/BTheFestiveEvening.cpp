#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n ,k;
    cin>>n>>k;

    string st; 
    cin>>st;
    int arr[26];

    for( int i=0;i<n;i++){
         
         char ch=st[i];
         arr[ch-'A']=i;

    }

    // calculated last position of each char 

    // to calculate ki kitne active he 
    set<char> hash;

    for( int i=0;i<n;i++){

        char ch=st[i];
        hash.insert(ch);

        if(arr[ch-'A']==i){
            hash.erase(ch);
        }else{

            if(hash.size()>k){
                cout<<"YES"<<'\n';
            }
        }
    }

    cout<<"NO"<<'\n';
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin>>T;
    while(T--)
        solve();
}