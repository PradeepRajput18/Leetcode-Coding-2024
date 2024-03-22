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
    void inorder(TreeNode* root,vector<int>&v,int k){
        if(root==NULL) return;

        if(k==-1) return;

        if(root->left) inorder(root->left,v,k);

        v.push_back(root->val);
        k--;

        if(root->right) inorder(root->right,v,k);

        return;
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int> v;

        inorder(root,v,k);


        return v[k-1];
    }
};