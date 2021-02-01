/**
 * @param {number[]} nums
 * @return {number}
 */
var thirdMax = function(nums) {
    if (nums.size == 0) return null;
    nums = nums.sort((a,b) => a-b);
    var st = new Set();
    for (var i=nums.length-1;i>=0;i--){
        st.add(nums[i]);
        if (st.size == 3) return nums[i];
    }
    return nums[nums.length -1];
    
};