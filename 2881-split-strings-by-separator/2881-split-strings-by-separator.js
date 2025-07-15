/**
 * @param {string[]} words
 * @param {character} separator
 * @return {string[]}
 */
var splitWordsBySeparator = function(words, separator) {
    let ans = [];
    words.map((word)=> {
        wordArr = word.split(separator);
        ans = [...ans, ...wordArr.filter((word)=>word.length !=0 )];
    })
    return ans;
};