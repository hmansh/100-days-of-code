var arr = new Array(83, 2, 12, 13, 1, 9, 17);
console.log(arr);

function merge(arr1, arr2) {
    // console.log(arr1, arr2);
    let result = [];
    let i = 0;
    let j = 0;

    while (i < arr1.length && j < arr2.length) {
        if (arr1[i] > arr2[j]) {
            result.push(arr2[j]);
            j++;
        } else {
            result.push(arr1[i]);
            i++;
        }
    }
    while (i < arr1.length) {
        result.push(arr1[i]);
        i++;
    }
    while (j < arr2.length) {
        result.push(arr2[j]);
        j++;
    }
    return result;
}

function mergeSort(arr) {
    if (arr.length <= 1) return arr;
    let halfPoint = Math.ceil(arr.length / 2);
    let firstHalf = mergeSort(arr.splice(0, halfPoint));
    console.log(firstHalf);
    let secondHalf = mergeSort(arr.splice(-halfPoint));
    console.log(secondHalf);
    return merge(firstHalf, secondHalf);
}

console.log(mergeSort(arr));