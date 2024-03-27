fun mergeSort(arr: IntArray, start: Int, end: Int) {
    if (start < end) {
        val mid = (start + end) / 2
        mergeSort(arr, start, mid)
        mergeSort(arr, mid + 1, end)
        merge(arr, start, mid, end)
    }
}

fun merge(arr: IntArray, start: Int, mid: Int, end: Int) {
    val leftArraySize = mid - start + 1
    val rightArraySize = end - mid
    val leftArray = IntArray(leftArraySize)
    val rightArray = IntArray(rightArraySize)

    for (i in 0 until leftArraySize) leftArray[i] = arr[start + i]
    for (j in 0 until rightArraySize) rightArray[j] = arr[mid + 1 + j]

    var i = 0
    var j = 0
    var k = start

    while (i < leftArraySize && j < rightArraySize) {
        if (leftArray[i] <= rightArray[j]) {
            arr[k] = leftArray[i]
            i++
        } else {
            arr[k] = rightArray[j]
            j++
        }
        k++
    }
    
    while (i < leftArraySize) {
        arr[k] = leftArray[i]
        i++
        k++
    }

    while (j < rightArraySize) {
        arr[k] = rightArray[j]
        j++
        k++
    }
}

fun main() {
    val arr = intArrayOf(9, 3, 1, 5, 13, 12)
    mergeSort(arr, 0, arr.size - 1)
    println(arr.joinToString(", "))
}