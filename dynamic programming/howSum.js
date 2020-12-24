//Write a funtion howSum(targetSum, numbers) that takes in a target sum and an array
//of numbers as arguemnets
// The function shoudl return an array containing any combination of elements that add 
//up to exactly the targetSum. If there is no combination that adds up to the targetSum,
//then return null.
// if there are multiple combinations that can reach the target, you may return any single
// one.

const howSum = (targetSum, numbers, memo = {}) => {
    if (targetSum in memo) return memo[targetSum];
    if (targetSum === 0) return [];
    if (targetSum < 0) return null;
    for(let num of numbers){
        const remainder = targetSum - num;
        const remainderResult = howSum(remainder, numbers, memo);
        if (remainderResult !== null){
            memo[targetSum] = [ ...remainderResult, num];
            return memo[targetSum];
        }
    }
    memo[targetSum] = null;
    return null;
}
// m = target sum
// n = numbers.length
// time = O(n^m * m) - Brute Force

console.log(howSum(300, [10, 4,3]));

