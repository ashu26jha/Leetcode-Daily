// 134. Gas Station
#include <bits/stdc++.h>
using namespace std;
int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
    int totalCost = 0 ;
    int temp = 0 ;
    int startindex = 0;
    int n = cost.size();

    for(int i = 0 ; i < n ; i++){
        totalCost += (gas[i]-cost[i]);
        temp += (gas[i]-cost[i]);
        if(temp < 0 ){
            startindex = i + 1;
            temp = 0;
        }
    }
    
    if(totalCost<0){
        return -1;
    }
    return startindex;
}
int main (){
    vector<int> temp {5,8,2,8};
    vector<int> temp1 {6,5,6,6};
    cout<<canCompleteCircuit(temp,temp1);
}
