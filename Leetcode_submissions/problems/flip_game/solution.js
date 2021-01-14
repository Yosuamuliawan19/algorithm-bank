/**
 * @param {string} s
 * @return {string[]}
 */
var generatePossibleNextMoves = function(s) {
    let arr = [];
    for (let i=0;i<s.length-1;i++){
        if (s[i] == '+' && s[i+1] == '+'){
            arr.push(s.substring(0,i)  + "--" + s.substring(i+2));
        }
    }
    return arr;
};