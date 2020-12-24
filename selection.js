var arr = new Array(83, 2, 12, 13, 1, 9, 17);
console.log(arr);

for(let i = 0 ; i < arr.length ; i++){
    var minidx = i;
    for(let j = i+1; j < arr.length ;j++){
        if (arr[minidx] > arr[j]){
            minidx = j;
        }
    }
    var temp = arr[minidx];
    arr[minidx] = arr[i];
    arr[i] = temp;
}

console.log(arr);
