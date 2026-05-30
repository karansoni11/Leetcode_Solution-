#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void solve(int n, 
               int k,vector<int>&current,vector<vector<int>>&ans,int index){
        if(current.size()==k){
            ans.push_back(current ); return;
    }
    for(int i = index; i <= n; i++){
    current.push_back(i);
    solve(n,k, current,ans,i+1);
    current.pop_back();
}
}
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>ans;
        vector<int>current;
        solve(n,k, current,ans,1);
        return ans;
    }
};