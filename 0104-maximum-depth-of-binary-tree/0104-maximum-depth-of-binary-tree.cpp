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
    // int maxi = INT_MIN;
    // void depth(TreeNode* root){
    //     static int count=1;
    //     if(!root)
    //         return;
    //     if(!root->left && !root->right){
    //         maxi = max(count,maxi);
    //         count-=1;
    //         return;
    //     }
    //     if(!root->left)
    //         count--;
    //     count++;
    //     if(root->left)
    //         depth(root->left);
    //     count++;
    //     if(!root->right)
    //         count--;
    //     if(root->right)
    //         depth(root->right);
    // }
public:
    int maxDepth(TreeNode* root) {
        // if(!root)
        //     return 0;
        // depth(root);
        // return maxi;
        
        if(!root) return 0;
        int maxLeft = maxDepth(root->left);
        int maxRight = maxDepth(root->right);
        return max(maxLeft, maxRight)+1;
    }
};