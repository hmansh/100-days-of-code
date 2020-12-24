//Write a canSum(targetSum, numbers) that takes in a targetSum
// and an array of numbers as arguements.

//The function should return a boolean indicating whether or not it
//is possible to generate the targetSum unsing number from the array.

//You can use the elements of the array as many times as you want.
//You may assume that all input numbers are non negative.

//canSum(7, [5, 3, 4, 7]) = returns true;
//7, 3+4
//canSum(7, [2, 4]) = returns false;

memo = {}

const canSum = (targetSum, arr, memo = {}) => {
    if (targetSum in memo) return memo[targetSum];
    if (targetSum === 0) return true;
    if (targetSum < 0) return false;
    for(let num of arr){
        if (canSum(targetSum-num, arr, memo) === true){
            memo[targetSum] = true;
            return true;
        }
    } 
    memo[targetSum] = false;
    return false;
}

console.log(canSum(7, [2, 3]));
console.log(canSum(7, [5, 3, 4, 7]));
console.log(canSum(7, [2, 4]));
console.log(canSum(300, [2, 4]));