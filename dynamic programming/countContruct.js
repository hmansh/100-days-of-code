//write a function 'countContruct(target, wordBank)' that accepts a target string and a array of strings.
//The function should return the number of ways that the target can be contructed by concatenating elements
//of the wordBack array.
// You may reuse elements of 'wordBanl' as many times as possible.

const countConstruct = (target, wordBank, memo = {}) => {
    if (target in memo) return memo[target];
    if (target === "") return 1;
    
    let totalCount = 0;
    for (let word of wordBank){
        if (target.indexOf(word) === 0){
            const remaining = target.slice(word.length);
            totalCount += countConstruct(remaining, wordBank, memo);
            }
    }
    memo[target] = totalCount;
    return totalCount;
};

console.log(countConstruct("abcdef", ["ab", "abc", "def"]));
console.log(countConstruct("eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeef", ['e', "ee", "eee", "eeeee"]));