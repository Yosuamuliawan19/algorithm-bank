/**
 * @param {number} n
 * @return {number}
 */
var totalMoney = function(n) {
    var ans = 0, week = 0;
    for (var i=0;i<n;i++){
        var x = i%7;
        
        if (x == 0){
            week ++;
        }
        ans += week + x;


    }
    return ans;
};