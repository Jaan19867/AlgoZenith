#include<iostream>
#include<stdio.h>
using namespace std;



int main(){


    int n;
   cin>>n;


//    for( int i=0;i<n;i++){
//     for( int j=0;j<n;j++){
//        if(j>=i){
//         cout<<"* ";
//        }
//     }
//     cout<<'\n';
//    }


cout<<"Pattern 2 is here "<<"\n";

   for( int i=0;i<n;i++){
    for( int j=0;j<n;j++){
       if(i+j  >=n-1){
        cout<<"X ";
       }else{
        cout<<"_";
       }
    }
    cout<<"\n";
   }

     for( int i=0;i<n;i++){
    for( int j=0;j<n;j++){
       if(i>=j){
        cout<<"X ";
       }else{
        cout<<" ";
       }
    }
    cout<<"\n";
   }


}