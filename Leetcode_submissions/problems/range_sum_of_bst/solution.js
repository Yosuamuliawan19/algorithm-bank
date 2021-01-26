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
 * @param {number} low
 * @param {number} high
 * @return {number}
 */
let sum = 0;
const rec = (node, low, high) => {
    if (node === null) return;
    if (node.val >= low && node.val <= high){
        sum += node.val;
    }
    if (node.left !== null){
        rec(node.left, low, high);
    }
    if (node.right !== null){
        rec(node.right, low, high);
    }
}
var rangeSumBST = function(root, low, high) {
    sum = 0;
    rec(root, low, high);
    return sum;
};