var arr = new Array(83, 2, 12, 13, 1, 9, 17);
console.log(arr);

for(var i = 0; i < arr.length-1; i++){
    for(var j = 0 ; j < arr.length-i-1 ; j++){
        if(arr[j] >= arr[j+1]){
            var temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }
    }
}

console.log(arr);