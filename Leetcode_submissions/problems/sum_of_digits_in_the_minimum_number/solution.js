/**
 * @param {number[]} A
 * @return {number}
 */
var sumOfDigits = function(A) {
    var mn = A[0];
    for (idx in A){
        mn = Math.min(mn, A[idx]);
    }
    var s = 0;
    while (mn != 0){
        s += (mn%10);
        mn = Math.floor(mn /10);
    }
    if (s % 2 == 0) return 1;
    return 0;
};