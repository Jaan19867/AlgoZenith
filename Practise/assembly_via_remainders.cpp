#include<iostream>
using namespace std;


int main(){


    int t;
    cin>>t;

    while(t--){
int n;
cin>>n;
int s=1000;
cout<<s<<" ";
int sum=0;
for( int i=0;i<n-1;i++){
    int x;
    cin>>x;
    sum +=x;
    cout<<s+sum<<" ";
}
cout<<endl;
    }
}