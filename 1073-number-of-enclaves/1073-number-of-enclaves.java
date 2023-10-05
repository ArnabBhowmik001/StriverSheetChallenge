class Solution {
   static void dfs(int[][] grid,int[][]vis,int[] X,int[] Y,int x,int y){
      int n=grid.length;
        int m=grid[0].length;
       vis[x][y]=1;
       for(int i=0;i<4;i++){
           int nrow=x+X[i];
           int ncol=y+Y[i];
           if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && grid[nrow][ncol]==1 && vis[nrow][ncol]==0){
               dfs(grid,vis,X,Y,nrow,ncol);
           }
       }
   }
    public int numEnclaves(int[][] grid) {
        int n=grid.length;
        int m=grid[0].length;
        int[][] vis=new int[n][m];
        int X[]=new int[]{-1,0,1,0};
        int Y[]=new int[]{0,+1,0,-1};
        for(int i=0;i<m;i++){
            if(grid[0][i]==1 && vis[0][i]==0){
                dfs(grid,vis,X,Y,0,i);
            }
            if(grid[n-1][i]==1 && vis[n-1][i]==0){
                dfs(grid,vis,X,Y,n-1,i);
            }
        }
        for(int i=0;i<n;i++){
               if(grid[i][0]==1 && vis[i][0]==0){
                dfs(grid,vis,X,Y,i,0);
            }
            if(grid[i][m-1]==1 && vis[i][m-1]==0){
                dfs(grid,vis,X,Y,i,m-1);
            }
        }
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1 && vis[i][j]==0){
                    ans++;
                }
            }
        }
        return ans;
      
    }
}