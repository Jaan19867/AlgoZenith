#include<iostream>
#include<stdio.h>
using namespace std;



int main(){


    int n;
   cin>>n;


   for( int i=0;i<n;i++){
    for( int j=0;j<n+3;j++){
      if(j+i >=n-1  && j-i<=n-1){
        cout<<"X ";

      }else{
        cout<<" ";
      }
    }
    cout<<'\n';
   }

}