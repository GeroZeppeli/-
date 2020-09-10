/**
 * struct TreeNode {
 *	int val;
 *	struct TreeNode *left;
 *	struct TreeNode *right;
 * };
 */

class Solution {
public:
    /**
     *
     * @param root TreeNode¿‡
     * @return int’˚–Õvector<vector<>>
     */
    vector<vector<int> > levelOrder(TreeNode* root) {
        // write code here
        vector<vector<int>>result;
        vector<int>res;
        if (root == nullptr)return result;
        queue<TreeNode*>q;
        q.push(root);
        //int size=q.size();
        while (!q.empty())
        {
            int size = q.size();
            while (size--)
            {
                TreeNode* temp = q.front();
                q.pop();
                res.push_back(temp->val);
                if (temp->left)q.push(temp->left);
                if (temp->right)q.push(temp->right);
            }
            result.push_back(res);
            res.clear();
        }
        return result;
    }
};