#include<bits/stdc++.h>

using namespace std;

void solve(){
    
    string s,r;
    cin>>s>>r;

    map<char,int> ms;
    map<char,int>mr;


    for( int i=0;i<s.length();i++){
        ms[s[i]]++;
    }


    for( int i=0;i<r.length();i++){
        ms[r[i]]++;
    }


    // ab dono ka occurence ka time mil gaya he 

  map<char,int>my_map;
  for( auto it=ms.begin();it!=ms.end();it++){
    char ch=it->first;
    int diff=it->second -mr[ch];
    if(diff<0){
        cout<<"NO"<<'\n';
    }else{
        my_map[ch]=diff;

    }
  }


  for( auto it=my_map.begin();it!=my_map.end();it++){
    cout<<it->first<<" "<<it->second<<'\n';
  }
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin>>T;
    while(T--)
        solve();
}