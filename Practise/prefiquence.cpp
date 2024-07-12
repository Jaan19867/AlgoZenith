#include<iostream>
using namespace std;


int main(){


    int t;
    cin>>t;

    while(t--){
int n,m;
cin>>n>>m;
        string a,b;
        cin>>a>>b;

      int i=0;
      int j=0;
int k=0;
      while(i<n && j<m){


        if(a[i]==b[j]){
            i++;
            j++;
            k++;
        }
        else{
            j++;
        }
      }

      cout<<k<<"\n";
    }
}