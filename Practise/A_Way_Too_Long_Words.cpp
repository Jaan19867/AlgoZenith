#include<iostream>
#include<bits/stdc++.h>
using namespace std;



int main(){
    int n;
    cin>>n;

    while(n--){
        string st;
        cin>>st;

        int size_of_string=st.length();

        if(size_of_string<=10){
            cout<<st<<'\n';

        }else{
             string r=st[0]+ to_string(st.size()-2)+st[st.size()-1];
          
   

        cout<<r<<'\n';

        }
       

    }
}