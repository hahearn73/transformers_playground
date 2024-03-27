function mergeSort(arr) {
    if (arr.length < 2) {
        return arr;
    }

    const middle = Math.floor(arr.length / 2);
    const left = arr.slice(0, middle);
    const right = arr.slice(middle);

    return merge(mergeSort(left), mergeSort(right));
}

function merge(left, right) {
    const sortedArray = [];

    while (left.length && right.length) {
        if (left[0] < right[0]) {
            sortedArray.push(left.shift());
        } else {
            sortedArray.push(right.shift());
        }
    }

    return [...sortedArray, ...left, ...right];
}

// Example usage:
const arrayToSort = [4, 3, 2, 1];
const sortedArray = mergeSort(arrayToSort);
console.log(sortedArray);