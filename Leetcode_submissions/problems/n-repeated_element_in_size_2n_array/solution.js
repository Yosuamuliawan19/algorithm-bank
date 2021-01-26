/**
 * @param {number[]} A
 * @return {number}
 */
var repeatedNTimes = function(A) {
    var mp = {};
    for (cur in A){
        if (mp[A[cur]] === undefined) mp[A[cur]] = 1;
        else return A[cur];
    }
    return -1;
};