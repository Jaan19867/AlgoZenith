#include<bits/stdc++.h>

using namespace std;


string a[]={".",".","twenty","thirty","forty","fifty","sixty",
"seventy" , "eighty" , "ninety"
};

string b[]={
    "zero","one","two" , "three","four","five","six","seven","eight"
};

void solve(){
    int n;
    cin>>n;
    if(n==10){
        cout<<"ten"<<'\n';
        return ;
    }
     if(n==11){
        cout<<"eleven"<<'\n';
        return ;
    }
     if(n==12){
        cout<<"twelve"<<'\n';
        return ;
    }
     if(n==13){
        cout<<"thirteen"<<'\n';
        return ;
    }
     if(n==14){
        cout<<"fourteen"<<'\n';
        return ;
    }
     if(n==15){
        cout<<"fifteen"<<'\n';
        return ;
    }
     if(n==16){
        cout<<"sixteen"<<'\n';
        return ;
    }
     if(n==17){
        cout<<"seventeen"<<'\n';
        return ;
    }
     if(n==18){
        cout<<"eighteen"<<'\n';
        return ;
    }
     if(n==19){
        cout<<"nineteen"<<'\n';
        return ;
    } if(n==20){
        cout<<"twenty"<<'\n';
        return ;
    }

    if(n>=0  && n<10){
        cout<<b[n]<<'\n';

    }else{
        int first=n%10;

        int second=n/10;
        cout<<a[second]+"-"+b[first]<<'\n';
    }


}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin>>T;
    while(T--)
        solve();
}