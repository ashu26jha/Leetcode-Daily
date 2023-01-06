// 1833. Maximum Ice Cream Bars

#include <bits/stdc++.h>
using namespace std;
int maxIceCream(vector<int>& costs, int coins) {
    sort(costs.begin(),costs.end());
    for(int i = 0 ; i < costs.size() && coins >= 0; i++){
        if(coins - costs[i]>=0){
            coins = coins - costs[i];
        }
        else{
            return i ;
        }
    }
    return costs.size();
}
