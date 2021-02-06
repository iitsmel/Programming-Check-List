# include <vector>
# include <queue>
using std::vector;
using std::queue;

// Definition for a binary tree node.
struct TreeNode {
     int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        
        queue<TreeNode *> Q;
        int node = 1;
        int nextnode = 0;
        Q.push(root);
        
        while(!Q.empty() && Q.front()) {
            TreeNode *temp = Q.front();
            
            if(node == 1)
                ans.push_back(temp -> val);
            
            if(temp -> left) {
                Q.push(temp -> left);
                nextnode++;
            }
            
            if(temp -> right) {
                Q.push(temp -> right);
                nextnode++;
            }
            
            node--;
              
            if(node == 0) { 
                node = nextnode;
                nextnode = 0;
            }       
            
            Q.pop();
        }
        
        return ans;
    }
};