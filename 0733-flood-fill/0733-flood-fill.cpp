class Solution {
public:
void dfs(vector<vector<int>>& image,int sr, int sc, int color,vector<vector<int>>& ans,int m,int n,int startColor){
       ans[sr][sc]=color;
       int x[]={-1,0,1,0};
       int y[]={0,-1,0,1};
       for(int i=0;i<4;i++){
          int nebx=sr+x[i];
           int neby=sc+y[i];
           if(nebx>=0 && nebx<n && neby>=0 && neby<m && image[nebx][neby]==startColor && ans[nebx][neby]!=color){ 
               dfs(image,nebx,neby,color,ans,m,n,startColor);
           }
       }
}
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n=image.size();
        int m=image[0].size();
        int startColor=image[sr][sc];
        vector<vector<int>> ans = image; 
        dfs(image,sr,sc,color,ans,m,n,startColor);
        return ans;

    }
};