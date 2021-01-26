/**
 * @param {string[]} words
 * @param {string} order
 * @return {boolean}
 */
var isAlienSorted = function(words, order) {
    var dic = {};
    var ans = 1;
    for (var i=0;i<order.length;i++){
        dic[order[i]] = i;
    }
    for (var i=0;i<words.length-1;i++){
        let a = words[i], b = words[i+1];
        let same = 1;
        for (var j=0;j<Math.min(a.length, b.length);j++){
            if (a[j] == b[j]) continue;
            else if (dic[a[j]] > dic[b[j]]){
                return 0;
                break;
            }else {
                same = 0;
                break;
            }  
        }
        if (same && a.length > b.length) return 0;
        // console.log("----");
    }
    return ans;
    
};