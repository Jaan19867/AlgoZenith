#include<bits/stdc++.h>

using namespace std;

int func(int a, int b , int c){

    int count=5;
    while(count--){
          if(a==b && b==c){
        a++;
        continue;
    }
        if(a<b && a<c){
            a++;
            continue;
        }
        if(b<a&& b<c){
            b++;
            continue;
        }

        if(c<a&& c<b){
            c++;
            continue;
        }
    }

    return a*b*c;

  

}

void solve(){
    int a , b ,c; 
    cin>>a>>b>>c;

    // we will choose largest number 

    // har step me use badhayenge jo chhota ho  
    // aur 5  step utitlise karenge hi 
int ans= func(a,b,c);
cout<<ans<<'\n';


}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin>>T;
    while(T--)
        solve();
}