/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @return {boolean}
 */
var head2;
var f = true;
var trav = function(cur) {
    if (cur === null || !f) return;
    if (cur.next !== undefined) {
        trav(cur.next);
    }
    if (head2.val !== cur.val){
        console.log([head2.val, cur.val]);
        f = false;
    }
    head2 = head2.next;    
}

var isPalindrome = function(head) {
    if (head === null) return true;
    head2 = head;
    f = true;
    console.log(f);
    trav(head);
    console.log(f);
    return f;
};