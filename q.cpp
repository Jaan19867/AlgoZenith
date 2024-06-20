#include<bits/stdc++.h>

using namespace std;

void solve(){

    int n,m;
    cin>>n>>m;

int largest_row=0;
int smallest_row=0;
int largest_col=0;
int smallest_col=0;

    for( int i=1;i<=n;i++){


        for( int j=1;j<m;j++){
            char ch;
            cin>>ch;


            if(ch=='#'){
                // i is row and j is column ; 
                if(largest_row<=i){
                    largest_row=i;
                }
                else if(smallest_row>=i){
                    smallest_row=i;
                }else if(largest_col<=j){
                    largest_col=j;
                }else if(smallest_col>=j){
                    smallest_col=j;
                }

            }
        }
    }


    // now to calculate the center h,k h is row and k is column 
    int h=(largest_col+smallest_col)/2;
    int k=(largest_row+smallest_row)/2;
    cout<<h<<" "<<k<<'\n';
    
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin>>T;
    while(T--)
        solve();
}