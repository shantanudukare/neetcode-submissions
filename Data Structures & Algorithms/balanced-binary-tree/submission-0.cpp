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
    int k=0 ;
    int  balanced(TreeNode* root){
         if (root == NULL)
            return 0;
        if(k==-1)return false;
       int lh = balanced(root->left);
       int rh = balanced(root->right);
       if((abs(lh-rh))>=2){
        k=-1;
       }
       return 1+max(lh,rh);

    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL)return true;
        balanced(root);
        if(k==-1){
            return false;
        }
        return true;
    }
};
