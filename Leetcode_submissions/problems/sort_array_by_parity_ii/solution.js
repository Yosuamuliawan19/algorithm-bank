/**
 * @param {number[]} A
 * @return {number[]}
 */
var sortArrayByParityII = function(A) {
    var a = 0, b = 1;
    var B = [...A];
    for (var i=0;i<A.length;i++){
        if (A[i] % 2 === 0){
            B[a] = A[i]; a+=2;
        }else{
            B[b] = A[i]; b+=2;
        }
    }
    return B;
};