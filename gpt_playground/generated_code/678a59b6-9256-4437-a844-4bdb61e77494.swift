func mergeSort<T: Comparable>(_ array: [T]) -> [T] {
    guard array.count > 1 else { return array }

    let midIndex = array.count / 2
    let leftArray = mergeSort(Array(array[0..<midIndex]))
    let rightArray = mergeSort(Array(array[midIndex..<array.count]))

    return merge(leftArray, rightArray)
}

func merge<T: Comparable>(_ left: [T], _ right: [T]) -> [T] {
    var mergedArray = [T]()
    var leftIndex = 0
    var rightIndex = 0

    while leftIndex < left.count && rightIndex < right.count {
        if left[leftIndex] < right[rightIndex] {
            mergedArray.append(left[leftIndex])
            leftIndex += 1
        } else {
            mergedArray.append(right[rightIndex])
            rightIndex += 1
        }
    }

    while leftIndex < left.count {
        mergedArray.append(left[leftIndex])
        leftIndex += 1
    }

    while rightIndex < right.count {
        mergedArray.append(right[rightIndex])
        rightIndex += 1
    }

    return mergedArray
}