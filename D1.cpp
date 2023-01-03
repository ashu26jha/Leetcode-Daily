// 290. Word Pattern
#include <bits/stdc++.h>
using namespace std;

bool wordPattern(string pattern, string s) {
    std::unordered_map <char,string> mp1;
    std::unordered_map <string,char> mp2;
    string temp = "";
    vector<string> helper;
    for(int i = 0 ; i < s.length() ; i++){
        if(s[i]==' '){
            helper.push_back(temp);
            temp = "";
        }
        else{
            temp += s[i];
        }
    }
    helper.push_back(temp);
    for(int i = 0 ; i < helper.size() ; i++){
        if( ( mp1.find(pattern[i]) == mp1.end() ) && ( mp2.find(helper[i])==mp2.end() ) ){
            mp1.insert({pattern[i],helper[i]});
            
        }
        else{
            if(mp1[pattern[i]]!=helper[i] ){
                
                return false;
            }
        }
    } 
    return true;
}

int main (){
    
    
    cout<<wordPattern("abba","dog cat cat dog");
}
