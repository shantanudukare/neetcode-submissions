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
    void good(TreeNode * root, int &ans,int maxInt){
        if(root==NULL)return ;
        if(root->val>=maxInt)ans++;
        maxInt = max(root->val,maxInt);
        good(root->left,ans,maxInt);
        good(root->right,ans,maxInt);
    }
    int goodNodes(TreeNode* root) {
        int maxInt = root->val;
        int ans =0;
        good(root,ans,maxInt);
        return ans;
    }
};
