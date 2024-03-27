def merge_sort(array)
  return array if array.length <= 1

  mid = array.length / 2
  left_half = merge_sort(array[0...mid])
  right_half = merge_sort(array[mid..array.length])

  merge(left_half, right_half)
end

def merge(left, right)
  result = []
  while left.size > 0 && right.size > 0
    if left.first <= right.first
      result << left.shift
    else
      result << right.shift
    end
  end
  result.concat(left).concat(right)
end