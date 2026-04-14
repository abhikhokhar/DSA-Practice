//pre order traversal
class Solution {
public:
    void findPreorder(vector<int> &ans, TreeNode* root){
        if(root == NULL) return;
        ans.push_back(root->val);
        findPreorder(ans, root->left);
        findPreorder(ans, root->right);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        findPreorder(ans, root);
        return ans;        
    }
};

//inorder traversal
class Solution {
public:
    void findInorder(vector<int> & ans, TreeNode* root){
        if(root == NULL) return;
        findInorder(ans,root->left);
        ans.push_back(root->val);
        findInorder(ans,root->right);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        findInorder(ans, root);
        return ans;        
    }
};

//post order traversal
class Solution {
public:
    void findpostorder(vector<int> & ans, TreeNode* root){
        if(root == NULL) return;
        findpostorder(ans, root->left);
        findpostorder(ans, root->right);
        ans.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        findpostorder(ans, root);
        return ans;        
    }
};