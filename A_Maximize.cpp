#include<iostream>
using namespace std;


int gcd(int a,int b){
    if(a%b==0){
        return b;
    }

    return gcd(b,a%b);


}
int main(){

int t;
cin>>t;

while(t--){

int x;
cin>>x;
int maxi=0;

int ans=0;
for( int i=1;i<x;i++){

int curr=gcd(x,i)+i;
if(maxi<=curr){
    maxi=curr;
    ans=i;
}


}
cout<<ans<<"\n";


}



}