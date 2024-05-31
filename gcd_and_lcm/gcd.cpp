#include<iostream>
using namespace std;

int gcd(int x,int y){


if(y%x==0){
    return x;
}

   

    return gcd(y%x,x);
}


int main(){



    int x,y;
    cin>>x>>y;


    cout<<gcd(x,y)<<"\n";
}