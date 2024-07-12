#include<bits/stdc++.h>

using namespace std;

void solve(){
    int a , b , c, d; 
    cin>>a>>b>>c>>d;
    int n ; cin>>n;

    // ab hame map me hi har cheeje store karni hogi 
    map<pair<int,int>,int> dist;
    // key is x , y   and value is distance which we will store 
    // to store which path is allowed 
    map<pair<int,int>,bool> allow;
    // now ek hame vis maintain karne ki jaroorat he 
    // but not required 
    while(n--){
        int k , scol,ecol;
        cin>>k>>scol>>ecol;

        for( int i=scol;i<=ecol;i++){
            allow[{k,i}]=true; 

        }

    }

    // now allowed to kar chhuke he lekin starting aur ending bhi allowed hoga 
    allow[{a,b}]=true; 
    allow[{c,d}]=true; 
    queue<pair<int,int>> q;

    q.push({a,b});
    dist[{a,b}]=0;
     int delrow[]={-1,-1,0,1,1,1,0,-1};
     int delcol[]={0,1,1,1,0,-1,-1,-1};

   while(!q.empty()){
    int row=q.front().first;
    int col=q.front().second;
    q.pop();

    // q sirf row col , hi store kar raha he uske respect me jo distance 
    // hogi wo ham map se store kar rahe he 

    // ab traversal karna he 

    for( int i=0;i<8;i++){
        int frow=row+delrow[i];
        int fcol=col+delcol[i];


        if(allow[{frow,fcol}] && ( !dist.count({frow,fcol})  || dist[{row,col}]+1<dist[{frow,fcol}])){
            dist[{frow,fcol}]=dist[{row,col}]+1;
            q.push({frow,fcol});
        }


    }

   }


   cout<<dist[{c,d}]<<'\n';





}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin>>T;
    while(T--)
        solve();
}