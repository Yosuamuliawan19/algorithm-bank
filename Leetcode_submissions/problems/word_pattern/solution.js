/**
 * @param {string} pattern
 * @param {string} s
 * @return {boolean}
 */
var wordPattern = function(pattern, s) {
    let arr = s.split(' ');
    if (arr.length != pattern.length) return false;
    let mp = {};
    let mp2 = {};
    for (let i=0;i<arr.length;i++){
        if (mp[pattern[i]] !== undefined){
            if (mp[pattern[i]] != arr[i]) return false;   
        }
        if (mp2[arr[i]] !== undefined){
            if (mp2[arr[i]] != pattern[i]) return false;   
        }
        mp[pattern[i]] = arr[i];
        mp2[arr[i]] = pattern[i];
    }
    // console.log(mp);
    return true;
    
};