#include<iostream>
using namespace std;
 

void find_prime(int n){

    int divi=0;
    for( int i=1;i*i<=n;i++){

        if(n%i==0){

            divi++;

            if(i*i !=n){
                divi++;
            }

        }
    }

     if(divi>2){
        cout<<"Not Prime"<<'\n';


    }
    else{

        cout<<"Prime "<<'\n';
    }

}


 int main(){


    int n;
    cin>>n;

  for( int i=1;i<=n;i++){

    find_prime(i);
  }


 }