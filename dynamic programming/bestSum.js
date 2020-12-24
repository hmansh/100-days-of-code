//Write a funtion bestSum(targetSum, numbers) that takes in a targetSum and returns an array
//of numbers as arguements.
//The funtion should return an array containing the shortest combination of numbers that add
//up exactly the targetSum.
//If there is a tie for the shortest combination, you may return any one of the shortest.

const bestSum = (targetSum, numbers, memo = {}) => {
    if (targetSum in memo) return memo[targetSum];
    if (targetSum === 0) return [];
    if (targetSum < 0) return null;

    let shortCombination = null;

    for(let num of numbers){
        const remainder = targetSum - num;
        const remainderResult = bestSum(remainder, numbers, memo);
        if (remainderResult != null){
            const combination = [ ...remainderResult, num];
            if (shortCombination === null || combination.length < shortCombination.length){
                shortCombination = combination;
            }
        }
    }
    memo[targetSum] = shortCombination;
    return shortCombination;
}

console.log(bestSum(10000, [2, 4, 3, 5000]));