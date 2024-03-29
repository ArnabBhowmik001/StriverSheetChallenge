class Solution {
public:
void solve(int col,int n,vector<string>& board,vector<vector<string>>& ans,vector<int>& leftRow,vector<int>& upperDiagonal,vector<int>& lowerDiagonal){
    if(col==n){
        ans.push_back(board);
        return ;
        }
        for(int row=0;row<n;row++){
            if(leftRow[row]==0 && upperDiagonal[col+row]==0 && lowerDiagonal[(n-1)+col-row]==0 ){
                board[row][col]='Q';
                leftRow[row]=1;
                upperDiagonal[col+row]=1;
                lowerDiagonal[(n-1)+col-row]=1;
                solve(col+1,n,board,ans,leftRow,upperDiagonal,lowerDiagonal);
                board[row][col]='.';
                leftRow[row]=0;
                upperDiagonal[col+row]=0;
                lowerDiagonal[(n-1)+col-row]=0;

            }
        }
    
}
    vector<vector<string>> solveNQueens(int n) {
        vector<int> leftRow(n,0),upperDiagonal(2*n-1,0),lowerDiagonal(2*n-1,0);
        vector<vector<string>> ans;
        vector<string> board(n);
        string s(n,'.');
        for(int i=0;i<n;i++){
            board[i]=s;
        }
        solve(0,n,board,ans,leftRow,upperDiagonal,lowerDiagonal);
           return ans;
    }
};