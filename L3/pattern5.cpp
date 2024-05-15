#include<iostream>
using namespace std;


int main(){

    int n;
    cin>>n;


    for( int i=0;i<n;i++){
        for( int j=0;j<4*n+5;j++){
            

if(i==j%4 || j%4+i==n-1){
    cout<<"X";
}
else{
    cout<<" ";
}
        }
cout<<'\n';
    }



    cout<<'\n';
    cout<<" This is copying in i direction that is in y direction ";
        for( int i=0;i<5*n;i++){
        for( int j=0;j<4*n+5;j++){
            

if(i%4==j || j+i%4==n-1){
    cout<<"X";
}
else{
    cout<<" ";
}
        }
cout<<'\n';
    };


}