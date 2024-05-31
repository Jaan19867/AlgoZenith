#include<iostream>

using namespace std;


int main(){

    int n;
    cin>>n;

char alp='A';
// Here we are iterating  from row =0 and all the column than row=1 , jo vivek gupta ne question dya he uske lye i aur j ko swap karna hoga 
    for( int i=0;i<5;i++){


        for( int j=0;j<26;j++){
if(i==j%4 || i+j%4==8){
    char letter=alp+j;

    cout<<letter;
   
}else{
    cout<<" ";
}



        }
        cout<<"\n";
    }

//     cout<<" Second pattern \n";
//     char alp='A';
//       for( int j=0;j<26;j++){


//         for( int i=0;i<5;i++){
// if(i==j%4 || i+j%4==8){
//     cout<<alp;
//     alp++;
// }else{
//     cout<<" ";
// }



//         }
//         cout<<"\n";
//     }

}