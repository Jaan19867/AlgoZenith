#include<bits/stdc++.h>

using namespace std;
String sol;
void printSol(int i , int j ){
    if(i==n || j==m) return ; 
    if(rec(i,j)==rec(i+1,j)){
        printSol(i+1,j);
    }else if(rec(i,j)==rec(i,j+1)){
        printSol(i,j+1);
    }else{
        sol+=a[i];
        printSol(i+1,j+1);
    }
}

void solve(){
    
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin>>T;
    while(T--)
        solve();
}