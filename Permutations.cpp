#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void solve (vector<int>&nums, vector<int>& current, vector<vector<int>>&ans, vector<bool>& unit){
        if (current.size()==nums.size()){
            ans.push_back(current );
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(unit[i])
                continue;
            unit[i]=true;
            current.push_back(nums[i]);
            solve (nums, current,ans,unit);
        current.pop_back();
                unit[i]=false; 
        }
        
    }
    vector<vector<int>> permute(vector<int>&nums){
    vector<vector<int>>ans;
    vector<int>current;
        vector<bool>unit(nums.size(),false);
    
        solve(nums, current,ans, unit);
        return ans;
        
    } 
    
};