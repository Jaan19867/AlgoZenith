#include<bits/stdc++.h>

using namespace std;

// Problem 
// N Jobs are given , each job has a start time , end time . 
// Find the maximum number of jobs that can be done without overlapping 

// greedy 

void solve(){

    vector<pair<int,int>> jobs;
    // first is starat 
    // second is end time 

    sort(jobs.begin(),jobs.end(),[](pair<int,int> a,pair<int,int>b){
        return a.second<b.second;
    });
    
}

int jobs_done=0;
int finish_time=0; // time of last finished hob 

for( auto& job: jobs){
    auto& start = job.first;
    auto& end=job.second;

    if(start>finish_time){
        jobs_done++;
        finish_time=end;
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