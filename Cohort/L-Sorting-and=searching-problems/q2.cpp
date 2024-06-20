#include<bits/stdc++.h>

using namespace std;

// Problem 
// Given an array of n integers 
// find for each array position the nearest position to its left having a smaller or equal value 

// monotonic stack can be used to find this in O(n)
// but we will use sroting and searchign to solve this problem 


// [1,5,2,10]


void solve(){
    int n;
cin>>n;

vector<pair<int,int>> values(n);
// first is element value 
// second is index


vector<int> A(n);

// take the input from the quesion 

for( int i=0;i<n;i++){
    values[i].first=A[i];
    values[i].second=i;

}
sort(values.begin(),values.end());

set<int> indexesCoveredTillNow;

for( int i=0;i<n;i++){
    int current_ind=values[i].second;
    // all the indexes that came before this has element smaller or equal to current 
    // out of all indexes covered till now 
    // find the max index which is less than current_ind
    auto it = indexesCoveredTillNow.lower_bound(current_ind);
    // [2,4,7,9]
    // lower_bound(5)=7
    // go to element before it , that's why it--
    // to check is we are at first element 

    if(it !=indexesCoveredTillNow.begin()){
        it--;
        // *it is the answer ; 
    }else{
        // -1 or no answer 
    }
    indexesCoveredTillNow.insert(current_ind);
    
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