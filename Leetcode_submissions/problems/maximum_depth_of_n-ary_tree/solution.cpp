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
    int ans = 0;
    void rec(Node* n, int dep){
        if (n == nullptr) return;
        ans = max(ans, dep);
        for (int i=0;i<n->children.size();i++){
            rec(n->children[i], dep+1);
        }
    }
    int maxDepth(Node* root) {
        
        rec(root, 1);
        return ans;
    }
};