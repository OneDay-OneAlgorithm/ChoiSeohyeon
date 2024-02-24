#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<vector<int>> v) {
    vector<int> ans;
    
    int xtmp, ytmp;
    
    if(v[0][0] == v[1][0]){
        xtmp = v[2][0];
    } else if(v[1][0] == v[2][0]){
        xtmp = v[0][0];
    } else {
        xtmp = v[1][0];
    }
    
    if(v[0][1] == v[1][1]){
        ytmp = v[2][1];
    } else if(v[1][1] == v[2][1]){
        ytmp = v[0][1];
    } else {
        ytmp = v[1][1];
    }
    
    ans.push_back(xtmp);
    ans.push_back(ytmp);

    return ans;
}