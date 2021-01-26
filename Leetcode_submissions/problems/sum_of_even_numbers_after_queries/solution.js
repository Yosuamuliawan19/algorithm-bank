/**
 * @param {number[]} A
 * @param {number[][]} queries
 * @return {number[]}
 */
var sumEvenAfterQueries = function(A, queries) {
    let sum = 0;
    for (idx in A){
        if (A[idx] % 2 == 0) sum += A[idx];
    }
    var ans = [];
    for (idx in queries){
        let before = A[queries[idx][1]];
        let after = A[queries[idx][1]] + queries[idx][0];
       
        if (before % 2 === 0){
            if (after % 2 === 0){
                sum += (after - before);
            }else{
                sum -= before;
            }
        }else{
            if (after % 2 === 0){
                sum += after;
            }
        }
            
        A[queries[idx][1]] = after;
        ans.push(sum);
    }
    return ans;
};