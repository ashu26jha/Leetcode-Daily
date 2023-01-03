// 520. Detect Capital
#include <bits/stdc++.h>
using namespace std;
bool detectCapitalUse(string word) {
    if(word.length()==1){
        return true;
    }
    int countsmol = 0 ;
    int countlarg = 0 ;
    for(int i = 0 ; i < word.length() ; i ++){
        if(word[i]>='A' && word[i]<='Z'){
            countlarg++;
        }
        if(word[i]>='a' && word[i]<='z'){
            countsmol++;
        }
    }
    if(countsmol == word.length() || countlarg == word.length() || ( (countsmol == word.length() -1) && (word[0]>='A' && word[0]<='Z') ) ){
        return true;
    }
    else{
        return false;
    }
}
