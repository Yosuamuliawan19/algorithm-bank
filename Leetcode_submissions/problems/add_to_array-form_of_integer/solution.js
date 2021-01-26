/**
 * @param {number[]} A
 * @param {number} K
 * @return {number[]}
 */
var addToArrayForm = function(A, k) {
    let idx = A.length - 1;
    let carry = 0;
    while (k != 0){
        if (idx == -1){
            idx = 0;
            A.unshift(0);
        } 
        let cur = k % 10; k = Math.floor(k/10);
        A[idx] += (cur + carry); carry = 0;
        if (A[idx] >= 10){
            carry = Math.floor(A[idx] / 10);
            A[idx] = A[idx] % 10;
        }
        idx--;
    }
    while (idx != -1){
        A[idx] += carry; carry = 0;
        if (A[idx] >= 10){
            carry = Math.floor(A[idx] / 10);
            A[idx] = A[idx] % 10;
        }
        idx--;
    }
    if (carry != 0){
        A.unshift(carry);
    }
    return A;
};