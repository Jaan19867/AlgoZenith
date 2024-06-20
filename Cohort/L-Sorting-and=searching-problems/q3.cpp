#include<bits/stdc++.h>

using namespace std;

// new problem 
// two types of quaries
// add on element x 
// find max element less tahn <=x
// the above question has been previously done check your notebook 


// Problem 
// You are given a playlist of a radio station 
// The playlist has total of n songs 
// What is the longest sequence of succssive songs where each song is unique 

// [1,4,5,1,10,12,4]


void solve(){

    int left=0;
    int mxLength=0;
    int n;
    cin>>n;

    map<int,int> lastOccurence;

    for( int right=0;right<n;right++){
        // A[right]  is the current song 

        auto it=lastOccurence.find(A[right]);

        if(it!=lastOccurence.end()){
            left=max(left,(it->second) +1);
        }

        lastOccurence[A[right]]=right;

        mxLength=max(mxLength,right-left+1);

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