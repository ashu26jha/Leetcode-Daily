// 452. Minimum Number of Arrows to Burst Balloons
#include <bits/stdc++.h>
using namespace std;
int findMinArrowShots(vector<vector<int>>& points) {
    sort(points.begin(),points.end());
    if(points.size()<=1){
        return points.size();
    }        
    
    int startindex = points[0][0]; //1
    int endindex = points[0][1];   //6
    int ans = 1 ;

    for(int i = 1 ; i < points.size() ; i++){
        int nextstart = points[i][0];//2
        int nextend = points[i][1];//8
        if(nextstart < endindex){
            startindex = max(nextstart,startindex);
            endindex = min(endindex,nextend);
        }
        else{
            ans++;
            startindex = nextstart;
            endindex = nextend;
        }
    }
    return ans;
}
int main (){
    vector<vector<int>> v {{10,16},{2,8},{1,6},{7,12}};
    cout<<findMinArrowShots(v);
}
