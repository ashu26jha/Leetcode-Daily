// 2244. Minimum Rounds to Complete All Tasks

// Idea is to divide in 3*k we almost thought of it correctly 
// But were using too many if statements
#include <bits/stdc++.h>
using namespace std;
int minimumRounds(vector<int>& tasks) {
    unordered_map <int,int> mp ;
    for(auto it : tasks){
        mp[it]++;
    }
    int ans = 0 ; 
    for(auto it : mp){
        if(it.second==1){
            return -1 ;
        }
        else{
            ans += it.second % 3 == 0 ? (it.second / 3) : (it.second / 3) + 1;
        }
    }
    return ans;
}
