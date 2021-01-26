/**
 * @param {number[]} arr
 * @return {boolean}
 */
var validMountainArray = function(arr) {
    let idx = 0, cnt1 = 0, cnt2 = 0, n = arr.length;
    while (idx < n && arr[idx] < arr[idx+1]){
        idx++;
        cnt1 ++;
    }
    
    while (idx < n && arr[idx] > arr[idx+1]){
        idx++;
        cnt2 ++;
    }
    
    return idx === n-1 && cnt1 !== 0 && cnt2 !== 0;
};