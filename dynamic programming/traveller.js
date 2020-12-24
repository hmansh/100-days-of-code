//Say that you're a traveller on a 2D grid, you begin in the top-left
//corner and your goal is to treavel to the bottom right corner. you 
// can only move down or right.

//In how many ways can you travel to the goal on the grid with dimension m*n;

memo = {};

const gridTraveller = (m, n, memo = {}) => {
    if ( `${m},${n}` in memo) return memo[`${m},${n}`];
    if (m === 1 && n === 1) return 1;
    if (m === 0 || n === 0) return 0;
    memo[`${m},${n}`] = gridTraveller(m-1, n, memo) + gridTraveller(m, n-1, memo);
    return memo[`${m},${n}`];
}

console.log(gridTraveller(1, 1));
console.log(gridTraveller(2, 3));
console.log(gridTraveller(3, 2));
console.log(gridTraveller(20, 20));
console.log(gridTraveller(200, 200));