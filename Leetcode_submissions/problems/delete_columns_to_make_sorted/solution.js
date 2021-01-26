/**
 * @param {string[]} A
 * @return {number}
 */
var minDeletionSize = function(A) {
    if (A.length == 0) return 0;
    var ans = 0;
    let n = A.length, m = A[0].length;    
    for (let i=0;i<m;i++){
        for (let j=0;j<n-1;j++){
            if (A[j][i] > A[j+1][i]){
                ans = ans + 1;
                break;
            }
        }

    }
    return ans;
};