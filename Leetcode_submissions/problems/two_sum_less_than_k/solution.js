/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
var twoSumLessThanK = function(nums, k) {
    var mx = -1;
    var n = nums.length;
    for (let i=0;i<n;i++){
        for (let j=i+1;j<n;j++){
            if (nums[i] + nums[j] < k && nums[i] + nums[j] > mx){
                mx = nums[i] + nums[j];
            }
        }
    }
    return mx;
};
