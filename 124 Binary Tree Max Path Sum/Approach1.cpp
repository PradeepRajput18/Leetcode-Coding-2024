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
    int max(int a,int b){
        return a<b?b:a;
    }
    int findmaxpath(TreeNode* root,int& maxpath){
        if(root==NULL) return 0;

        int maxleft=max(0,findmaxpath(root->left,maxpath));
        int maxright=max(0,findmaxpath(root->right,maxpath));

        maxpath=max(maxpath,maxleft+maxright+root->val);


        return root->val+max(maxleft,maxright);

    }
    int maxPathSum(TreeNode* root) {
        int maxpath=INT_MIN;

        findmaxpath(root,maxpath);

        return maxpath;
    }
};