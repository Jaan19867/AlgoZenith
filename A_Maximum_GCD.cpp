#include<iostream>
using namespace std;



int main(){

     int t;
     cin>>t;


     while(t--){

        int x;
        cin>>x;

        if(x&1){
            cout<<(x-1)/2<<"\n";
        }

        else{
            cout<<x/2<<"\n";
        }
     }


}