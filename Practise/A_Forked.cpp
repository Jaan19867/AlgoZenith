// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main() {
    // Write C++ code here
 int T;
 cin>>T;
 
 while(T--){
    
    int a,b, xk,yk,xq,yq;
    cin>>a>>b>>xk>>yk>>xq>>yq;

    vector<pair<int,int>>vt;

    vt={{a,b},{a,-b},{-a,b},{-a,-b},{b,a},{b,-a},{-b,a},{-b,-a}} ;


set<pair<int,int>> king;
set<pair<int,int>> queen;

    for( auto it: vt){

int x_k=it.first+xk;
int y_k=it.second+yk;

king.insert({x_k,y_k});

int x_q=it.first+xq;
int y_q=it.second+yq;

queen.insert({x_q,y_q});


    }


    int ans=0;

    for( auto  element : king){
        if(queen.find(element) != queen.end()){
            ans++;
        }
    }  

    cout<<ans<<"\n";
      
      
}
 
}