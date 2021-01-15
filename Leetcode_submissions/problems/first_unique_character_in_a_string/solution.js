/**
 * @param {string} s
 * @return {number}
 */
var firstUniqChar = function(s) {
    let mp = {};
    for (i in s){
        if (mp[s[i]] === undefined){
            mp[s[i]] = 1;
        }else{
            mp[s[i]]++;
        }
    }
    for (i in s){
        if (mp[s[i]] === 1) return i;
    }
    // console.log(mp);
    return -1;
};