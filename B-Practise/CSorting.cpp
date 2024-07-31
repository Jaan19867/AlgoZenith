#include<bits/stdc++.h>

using namespace std;
const int N=2e5+20;
int n , q; 
string s[2];
int pref[2][26][N];


void solve(){
    cin>>n>>q;
    cin>>s[0]>>s[1];

    for( int t:{0,1}){
        for( int c=0;c<26;c++){
            for(int i=0;i<n;i++){
                pref[t][c][i+1]=pref[t][c][i]+(s[t][i]-'a'==c);
            }
        }
    }

    while(q--){
        int l , r ; 
        cin>>l>>r;
        l--;
        int tot=0;

        for( int c=0;c<26;c++){
            int num1=pref[0][c][r]-pref[0][c][l];
            int num2=pref[1][c][r]-pref[1][c][l];
            tot+=abs(num1-num2);


        }
        cout<<tot/2<<'\n';

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