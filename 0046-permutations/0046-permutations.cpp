class Solution {
public:
void solve(vector<vector<int>>& ans,vector<int>& ds,int i,vector<int>& nums){
    if(i==nums.size()){
        ans.push_back(ds);
        return;
    }
    for(int j=0;j<nums.size();j++){
        if(ds[j]==11){
            ds[j]=nums[i];
         solve(ans,ds,i+1,nums);
         ds[j]=11;
        }    
    }
}
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds(nums.size(),11);
       solve(ans,ds,0,nums);
         return ans;
    }
};