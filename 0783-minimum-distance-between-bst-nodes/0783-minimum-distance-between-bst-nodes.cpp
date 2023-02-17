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
    vector<int> v;
    void fill(TreeNode* root){
        if(!root)
            return;
        if(!root->left && !root->right){
            v.push_back(root->val);
            return;
        }
        v.push_back(root->val);
        fill(root->left);
        fill(root->right);
    }
    
public:
    int minDiffInBST(TreeNode* root) {
        fill(root);
        sort(v.begin(), v.end());
        int mini = INT_MAX;
        for(int i=1; i<v.size(); i++){
            if((v[i]-v[i-1])<mini)
                mini = v[i]-v[i-1];
            if(mini == 0)
                return 0;
        }
        return mini;
    }
};