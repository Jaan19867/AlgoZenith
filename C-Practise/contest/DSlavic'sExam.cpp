#include<bits/stdc++.h>

using namespace std;

void solve(){
    
    string a ,b;
    cin>>a>>b;

    bool flag=true; 

    int pointer=0;

   

 for( int i=0;i<b.length();i++){
     char ch=b[i];

     while(pointer<a.length()){
        if(a[pointer]==ch){
            pointer++;
            break; 
        }else if(a[pointer]=='?'){
            break; 
        }else{
            pointer++;
        }
     }

     if(pointer==a.length() && i!=b.length()-1){
        flag=false; 
     }


 }

 if(flag){
    cout<<"YES"<<'\n';
 }else{
    cout<<"NO"<<'\n';
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