function findLargestElement(list) {
  if (list.length === 0) {
    return null; // Returns null if the list is empty
  }
  
  let largest = list[0];
  for (let i = 1; i < list.length; i++) {
    if (list[i] > largest) {
      largest = list[i];
    }
  }
  return largest;
}