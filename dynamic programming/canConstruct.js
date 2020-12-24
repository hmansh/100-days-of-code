//Write a function canConstruct(target, wordBank) that accepts a target string and an array 
//of strings.

//The funtion should return a boolean indicating whether or not the target can be constructed
//by concatenating elements of the wordBack array.

// You may resuse elements of wordBank as many times as needed.

const canConstruct = (targetString, strings, memo = {}) => {
    if (targetString in memo) return memo[targetString];
    if (targetString === '') return true;

    for(let str of strings){
        if (targetString.indexOf(str) == 0){
            const suffix = targetString.slice(str.length);
            if(canConstruct(suffix, strings, memo) === true){
                memo[targetString] = true;
                return true;
            }
        }
    }
    memo[targetString] = false;
    return false;
}

console.log(canConstruct("abcdef", ["ab", "abc", "def"]));
console.log(canConstruct("eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeef", ['e', "ee", "eee", "eeeef"]));