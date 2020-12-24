var arr = new Array(32, 23, 3, 11, 3);
console.log(arr);

function shellSort(arr, n) { 
    var flag = 0;
    for (let gap = Math.ceil(n/2); gap > 0; gap /= 2) { 
        for (let i = Math.ceil(gap); i < n; i += 1) { 
            flag = 0;
            let temp = arr[i]; 
            let j;             
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap){ 
                arr[j] = arr[j - gap];
                flag = 1;
            }
            arr[j] = temp; 
            if (flag == 1){
                console.log(arr);
            }
        } 
    } 
    return arr;
} 

shellSort(arr, arr.length);