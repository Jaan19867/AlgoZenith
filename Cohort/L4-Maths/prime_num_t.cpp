#include<iostream>
#include<vector>
using namespace std;


int main(){


int n;
cin>>n;


    vector<int> divCnt(n+1,0);

    for( int i=1;i<=n;i++){
        for( int j=i;j<=n;j+=i){
            divCnt[j]++;
        }
    }





    for( int i=1;i<=n;i++){
        cout<<divCnt[i]<<"  ";

    }

    // the above code counts the number of factor 

    //  Sieve of Eratosthenes 


    vector<bool> isPrime(n+1,true);
isPrime[0]=false;
isPrime[1]=false;


    for( int i=0;i<n+1;i++){
        if(!isPrime[i])continue;
// We are here means the i is prime 
        for( int j=i+i;j<=n;j+=i){
            // here we are visiting multiple of above prime  number so it will definately will not be prime number 
            
    isPrime[j]=false;
        }
        
    }


    for( int i=0;i<=n;i++){

        cout<<isPrime[i]<<" :   "<<'\n';
    }

 
}