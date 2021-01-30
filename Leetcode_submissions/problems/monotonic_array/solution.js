/**
 * @param {number[]} A
 * @return {boolean}
 */
var isMonotonic = function(A) {
    var a = true, b = true;
    for (var i=0;i<A.length-1;i++){
        if (A[i+1] < A[i]){
            a = false; break;
        }
    }
    for (var i=0;i<A.length-1;i++){
        if (A[i+1] > A[i]){
            b = false; break;
        }
    }
    return a || b;
};