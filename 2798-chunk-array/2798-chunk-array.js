/**
 * @param {Array} arr
 * @param {number} size
 * @return {Array}
 */
var chunk = function(arr, size) {
    let ans = [];
    for(let i=0; i<arr.length; i++) {
        let subarr = [];
        for(let j=0; j<size && i<arr.length; j++) {
            subarr.push(arr[i]);
            i++;
        }
        ans.push(subarr);
        i--;
    }
    return ans;
};
