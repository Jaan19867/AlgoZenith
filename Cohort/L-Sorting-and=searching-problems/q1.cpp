#include<bits/stdc++.h>

using namespace std;


// You are given the arrival and leaving times of n customers in a restaurant what was the maximum number of customers in the restaurant at any time ? 
// arrival =[1,2,10,5,5]
// leaving =[4,5,12,9,12]


void solve(){
    vector<pair<int,int>> times;
    // isme ham ye store karenge ki 
    // first me arrival he ya leaving ka time 
    // second me uska score  
  int n;
  cin>>n;
  // to define to vector at same time 
  // similar to int a,b ; 

  vector<int> leaving(n),arrival(n);
  // here this is for taking input  


  for( int i=0;i<n;i++){
    times.push_back({arrival[i],1});
    times.push_back({leaving[i],-1});
  } 

  // so hamara times kuch aise dikha raha hoga 
  //   {1,1},{4,-1},{2,1},{5,-1}
  // now times ko sort karna he taaki ye time ke hisaab se sort ho jaaye
  sort(times.begin(),times.end());
  // here first part of pair ke base pe sort honge 
  int num=0;
  int maxnum=0;

// most beautiful example of destructuing in cpp 

  for( auto& [time,type]:times){

                 if(type==-1){
                    num++;
                    maxnum=max(num,maxnum);
                 }else{
                    // here type ==-1 people is leaving 
                    num--;
                 }

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