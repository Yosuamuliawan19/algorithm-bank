/**
 * @param {number} N
 * @param {number[][]} trust
 * @return {number}
 */
var findJudge = function(N, trust) {
    let arr = new Array(N).fill(0);
    let arr2 = new Array(N).fill(0);
    for (idx in trust){
        arr[trust[idx][0]-1] = 1;
        arr2[trust[idx][1]-1] ++;
    }
    
    let f = 0;
    for (let i=0;i<N;i++){
        if (arr[i] == 0){
            if (f) return -1;
            f = 1;
            if (arr2[i] == N-1) return i+1;
            else return -1;
        }
    }
  
    return -1;
};