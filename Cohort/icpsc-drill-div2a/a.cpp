#include<iostream>
#include<vector>
using namespace std;



int main(){


 
int k;
cin>>k;

vector<int> vt(10,0);

for( int i=0;i<4;i++){


string st;
cin>>st;
for( int i=0;i<4;i++){
    if(st[i]>'0'  && st[i]<='9'){
        int digit=st[i]-'0';
        vt[digit]++;
        if(vt[digit]>2*k){

     cout<<"NO"<<'\n';
     return 0;
    }
}

  

}




    
    }
cout<<"YES";
}

