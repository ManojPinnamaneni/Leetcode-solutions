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
    int inOrderSuccessor(TreeNode* root){
        if (root->left != NULL)
        return inOrderSuccessor(root->left);

        return root->val;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if (root == NULL) return root;
        if (root->val > key){
            root->left = deleteNode(root->left,key);
        }else if (root->val < key){
            root->right=deleteNode(root->right,key);
        }else{
            if (root->left == NULL) return root->right;
            else if (root->right == NULL) return root->left;
            else{
                int inOrder=inOrderSuccessor(root->right);
                root->val=inOrder;
                root->right=deleteNode(root->right,inOrder);
            }
        }
        return root;
    }
};