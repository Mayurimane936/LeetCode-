/**
 * @param {Object|Array} obj
 * @return {boolean}
 */
var isEmpty = function(obj) {
    for(const ele of Object.entries(obj)) {
        return false;
    }
    return true;
};