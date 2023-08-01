class Solution {
public:
void sequences(vector<int>& ds,vector<vector<int>>& ans,int n,int k,int i){
    if(ds.size()==k){
        ans.push_back(ds);
        return;
    }
    for(int m=i;m<n;m++){
        ds.push_back(m+1);
        sequences(ds,ans,n,k,m+1);
        ds.pop_back();
    }

}
    vector<vector<int>> combine(int n, int k) {
         vector<vector<int>> ans;
         vector<int> ds;
         sequences(ds,ans,n,k,0);
         return ans;
    }
};