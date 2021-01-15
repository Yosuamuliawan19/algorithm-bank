/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> ans;
    void trav(Node* node){
        if (node == nullptr) return ;
        // cout << node->val << endl;
        ans.push_back(node->val);
        for (int i=0;i<node->children.size();i++){
            trav(node->children[i]);
        }
        
    }
    vector<int> preorder(Node* root) {
        trav(root);
        return ans;
    }
};