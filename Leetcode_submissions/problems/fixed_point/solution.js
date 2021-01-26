/**
 * @param {number[]} arr
 * @return {number}
 */
var fixedPoint = function(arr) {
    for (let i=0;i<arr.length;i++){
        if (i == arr[i]) return arr[i];
    }
    return -1;
};