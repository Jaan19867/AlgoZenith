#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<vector<int>> vt(6,vector<int>(6,0));
pair<int,int> pr;
    for( int i=1;i<6;i++){

        for( int j=1;j<6;j++){

            int x;
            cin>>x;
            if(x==1){
                pr.first=i;
                pr.second=j;

            }

        }
    }


    int answer=abs(pr.first-3) + abs(pr.second-3);
    cout<<answer<<'\n';

    
}