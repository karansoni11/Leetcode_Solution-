#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<string>ans;
void solve(int i,string digits, vector<string>& mp,string curr ){
    if (i==digits.size()){
        ans.push_back(curr);
        return;
    }
    string letter=mp[digits[i]-'0'];
    for (char ch:letter){
        solve(i+1,digits,mp,curr+ch);
    }
}
    vector<string> letterCombinations(string digits) {
        if(digits.empty())
            return {};
            vector<string>mp={"", "",
            "abc", "def",
            "ghi", "jkl",
            "mno", "pqrs",
            "tuv", "wxyz"};
            solve(0,digits,mp,"");
            return ans;
        }


    };