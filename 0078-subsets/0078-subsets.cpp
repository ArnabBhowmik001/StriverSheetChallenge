class Solution {
public:
void generate(vector<vector<int>>& a,vector<int>& nums,vector<int>& b,int i,int n){
    if(i==n){
     a.push_back(b);
     return;
    }
    b.push_back(nums[i]);
    generate(a,nums,b,i+1,n);
    b.pop_back();
    generate(a,nums,b,i+1,n);
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>a;
        vector<int>b;
        generate(a,nums,b,0,nums.size());
        return a;
    }
};