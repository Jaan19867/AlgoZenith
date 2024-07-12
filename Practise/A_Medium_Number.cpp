#include<iostream>

using namespace std;


int main(){



    int t;
    cin>>t;
    while(t--){

        int a,b,c;
        cin>>a>>b>>c;

       

        if(a>=b && a<=c){
            cout<<a<<"\n";
        }


         if(b>=a && b<=c){
            cout<<a<<"\n";
        }

         if(c>=a && c<=a){
            cout<<a<<"\n";
        }
    }
}