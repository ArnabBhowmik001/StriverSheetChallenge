class Node{
    int first;
    int second;
    int third;
    Node(int first,int second,int third){
        this.first=first;
        this.second=second;
        this.third=third;
    }
}
class Solution {
    public int[][] updateMatrix(int[][] mat) {
        int n=mat.length;
        int m=mat[0].length;
        int[][] vis=new int[n][m];
        int dist[][] = new int[n][m]; 
        Queue<Node> q=new LinkedList<Node>();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==0){
                    vis[i][j]=1;
                    q.add(new Node(i,j,0));
                }else{
                    vis[i][j]=0;
                }
            }
        }
        while(!q.isEmpty()){
            int row=q.peek().first;
            int col=q.peek().second;
            int steps=q.peek().third;
            dist[row][col]=steps;
            q.remove(); 
            int x[]=new int[]{-1,0,+1,0};
            int y[]=new int[]{0,+1,0,-1};
            for(int i=0;i<4;i++){
                int nrow=row+x[i];
                int ncol=col+y[i];
                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && vis[nrow][ncol]==0){
                    vis[nrow][ncol]=1;
                    q.add(new Node(nrow,ncol,steps+1));
                }
            }
        }
        return dist;
    }
}