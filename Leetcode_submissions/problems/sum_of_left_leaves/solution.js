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
 * @return {number}
 */
var sum = 0;
var rec = (root) => {
    if (root === null) return ;
    if (root.left !== null) {
        rec(root.left)
        if (root.left.left === null && root.left.right === null)  sum += root.left.val;
    }
    if (root.right !== null) rec(root.right);
    
}
var sumOfLeftLeaves = function(root) {
    sum = 0;
    rec(root);
    return sum ;
};