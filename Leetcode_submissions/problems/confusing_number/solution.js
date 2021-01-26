/**
 * @param {number} N
 * @return {boolean}
 */
var confusingNumber = function(N) {
    let a = N;
    let b = 0;
    while (a != 0){
        let cur = a % 10; a = Math.floor(a/ 10);
        // console.log(cur);
        if (cur === 1 || cur === 0 || cur === 8){
            b = (b*10) + cur;
        }else if (cur === 6){
            b = (b*10) + 9;
        }else if (cur === 9){
            b = (b*10) + 6;
        }else{
            return false;
        }
    }

    return N != b;
};