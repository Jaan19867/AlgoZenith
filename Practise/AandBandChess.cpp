#include<bits/stdc++.h>

using namespace std;

int wtw;
int wtb;

void check(int row , int col , char arr[8][8]){
    if(arr[row][col]=='q'){

       wtb+=9;
    }
     if(arr[row][col]=='r'){
        wtb+=5;
        
    }
     if(arr[row][col]=='b'){
        wtb+=3;
        
    }
     if(arr[row][col]=='n'){
        wtb+=3;
        
    }
     if(arr[row][col]=='p'){
        wtb+=1;
        
    }
     if(arr[row][col]=='k'){
        wtb+=0;
        
    }

    ///
       if(arr[row][col]=='Q'){

       wtw+=9;
    }
     if(arr[row][col]=='R'){
        wtw+=5;
        
    }
     if(arr[row][col]=='B'){
        wtw+=3;
        
    }
     if(arr[row][col]=='N'){
        wtw+=3;
        
    }
     if(arr[row][col]=='P'){
        wtw+=1;
        
    }
     if(arr[row][col]=='K'){
        wtw+=0;
        
    }

}

void solve(){
    char arr[8][8];

    for( int i=0;i<8;i++){
        for( int j=0;j<8;j++){
            cin>>arr[i][j];
        }
    }

     wtw=0;
     wtb=0;

    for( int i=0;i<8;i++){
        for( int j=0;j<8;j++){
            check(i,j,arr);
        }
    }
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

 
        solve();
}