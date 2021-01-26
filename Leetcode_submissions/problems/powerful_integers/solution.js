/**
 * @param {number} x
 * @param {number} y
 * @param {number} bound
 * @return {number[]}
 */
var powerfulIntegers = function(x, y, bound) {
    let arr1 = [], arr2 = [], idx = 0;
    if (x !== 1){
        while (Math.pow(x, idx) <= bound){
            arr1.push(Math.pow(x, idx));   
            idx++;
        }
    }else arr1.push(1);
    idx = 0;
    if (y !== 1){
         while (Math.pow(y, idx) <= bound){
            arr2.push(Math.pow(y, idx));   
            idx++;
        }
    }else arr2.push(1);
   
    
    let st = new Set();
    for (var i=0;i<arr1.length;i++){
        for (var j=0;j<arr2.length;j++){
            if (arr1[i] + arr2[j] <= bound) st.add(arr1[i] + arr2[j]);
        }
    }
    return Array.from(st);
};