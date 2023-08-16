/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
 int diameter(TreeNode* root,int& d){
        if(root==NULL)return 0;
        int lh=max(0,diameter(root->left,d));
        int rh=max(0,diameter(root->right,d));
        d=max(d,lh+rh+root->val);
        return (root->val+max(lh,rh));
   }
    int maxPathSum(TreeNode* root) {
         if(root==NULL)return 0;
        int d=INT_MIN;
        diameter(root,d);
        return d;
    }
};