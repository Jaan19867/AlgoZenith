#include<bits/stdc++.h>

using namespace std;


bool checkincreasingnum(string &num){


if(num.length()==1){
    return true;
}
for( int i=1;i<num.length();i++){


if(num[i]<num[i-1]){
    return false;

}
}
return true;
    


}


bool checkincreasingletter(string &letter){

if(letter.length()==1){
    return true;
}
for( int i=1;i<letter.length();i++){


if(letter[i]<letter[i-1]){
    return false;

}
return true;
    

}  

}

void solve(){

    string st;
    cin>>st;



    // check numerical increasing order , letters lexographical , no digits after letters 988abc   



string num="";

string letters="";

   int i=0;

// if string is started with number 

while(isdigit(st[i])){

num.push_back(st[i]);
i++;
}


while(!isdigit(st[i])){
    letters.push_back(st[i]);
    i++;

}

if(isdigit(st[i])){
    cout<<"NO"<<'\n';
    return ; 
}


if(!checkincreasingnum(num)){
    cout<<"NO"<<'\n';
    return ;
}

if(!checkincreasingletter(letters)){
    cout<<"NO"<<'\n';
    return ;
}

cout<<"YES"<<'\n';


          

    }
    


int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin>>T;
    while(T--)
        solve();
}