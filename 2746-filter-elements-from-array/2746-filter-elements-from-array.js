/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var filter = function(arr, fn) {
    let ans = [];
    for(let i=0;i<arr.length;i++) {
        let data = fn(arr[i],i);
        if(data) {
        ans.push(arr[i]);
        }
    }
    return ans;
};