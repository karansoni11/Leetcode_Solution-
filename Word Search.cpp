#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool solve (vector<vector<char>>& bord,string word,int i,int j, int index ){
        if(index==word.size()){
            return true;
        }
        if (i<0||j<0||i>=bord.size()||j>=bord[0].size()||bord[i][j]!=word[index]){
            return false;
        }
         char temp=bord[i][j];
        bord[i][j] = '#';
      bool found=  solve (bord,word,i+1,j ,index+1)||
        solve (bord,word,i-1,j ,index+1)||
        solve (bord,word,i,j+1 ,index+1)||
        solve (bord,word,i,j-1 ,index+1);
            bord[i][j]=temp;
        
    return found;
}
    bool exist(vector<vector<char>>& board, string word) {
        int row=board.size();
        int colum= board[0].size();
        for(int i=0;i<row;i++){
            for(int j=0;j<colum;j++){
        
        if(solve(board,word,i,j,0)){
            return true;
        }
            }
    }
        return false;
        
    }
};