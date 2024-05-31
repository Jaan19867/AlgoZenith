#include<iostream>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
int a,b,c,d;
cin>>a>>b>>c>>d;

int points=0;
if(a>b){
    for( int i=b;i<a;i++){


        if(i==c || i==d){
points++;
        }
    }
}
else{
        for( int i=a;i<b;i++){

  if(i==c || i==d){
points++;
        }
    }
    

}

if(points==1){
    cout<<"YES"<<'\n';
}
else{
    cout<<"NO"<<'\n';
}



    }
}

