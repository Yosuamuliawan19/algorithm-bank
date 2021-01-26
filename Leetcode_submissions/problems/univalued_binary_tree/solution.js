/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */
/**
 * @param {TreeNode} root
 * @return {boolean}
 */
var st;
const rec = (node) => {
    if (node === null) return;
    if (st.size > 1) return;
    st.add(node.val);
    if (node.left !== null) rec(node.left);
    if (node.right !== null) rec(node.right);
    
}
var isUnivalTree = function(root) {
    st = new Set();
    rec(root);
    return st.size === 1;
};