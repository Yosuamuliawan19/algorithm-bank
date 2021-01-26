/**
 * @param {string} text
 * @param {string[]} words
 * @return {number[][]}
 */
var indexPairs = function(text, words) {
    var st = new Set();
    var mx = 0;
    var ans = [];
    var n = text.length;
    for (idx in words){
        st.add(words[idx]);
        mx = Math.max(mx, words[idx].length);
    }
    for (let i=0;i<n;i++){
        for (let j=i;j<= Math.min(i+mx,n-1) ;j++){
            if (st.has(text.substr(i, j-i+1))){
                ans.push([i,j]);
            }
        }
    }
    return ans;
};