//Write a funtion 'allConstruct(target, wordBank)' that accepts a target string and an array of strings.
// The function should return a 2D array containing all of the ways that the target can be constructed
//by concatenating elements of the wordBank array. Each element of the 2D array should represent one 
//combination that constructs the target.
// You can resue elements of the wordBank as many times you want.  

const allConstruct = (target, wordBank) => {
    if (target === '') return [[]];

    const result = [];

    for(let word of wordBank){
        if (target.indexOf(word) === 0){
            const suffix = target.slice(word.length);
            const suffixWays = allConstruct(suffix, wordBank);
            const targetWays = suffixWays.map(way => [word, ...way]);
            result.push(...targetWays);
        }
    }
    return result;
}

console.log(allConstruct("people", ["peo", "ple", 'p', 'e', 'o']));