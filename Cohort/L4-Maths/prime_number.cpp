#include<iostream>
using namespace std;

int main(){



    // here we will find number of divisor n to calculate whether it's prime or not 

    int n;
    cin>>n;



    int div=0;

    for( int i=1;i<=n;i++){

        if(n%i==0){
            div++;
        }
    }

    if(div>2){
        cout<<"Not Prime"<<'\n';


    }
    else{

        cout<<"Prime"<<'\n';
    }



// the above time complexity is just O(n)
    // Here we will try to optimize it 

 
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
        cout<<"Not Prime 2nd time "<<'\n';


    }
    else{

        cout<<"Prime 2nd time "<<'\n';
    }
// so the above code time complexity if O(root(n))





}