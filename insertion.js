var arr = new Array(83, 2, 12, 13, 1, 9, 17);
console.log(arr);

for(let i = 1; i < arr.length ; i++){
    var key = arr[i];
    var j = i - 1;
    while( j >= 0 && key < arr[j]){
        arr[j+1] = arr[j];
        j--;
    }
    arr[j+1] = key;
}

console.log(arr);
