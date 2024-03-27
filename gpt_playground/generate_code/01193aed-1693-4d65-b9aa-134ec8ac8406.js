function intersection(setA, setB) {
  let _intersection = new Set();
  for (let elem of setB) {
    if (setA.has(elem)) {
      _intersection.add(elem);
    }
  }
  return _intersection;
}

// Example usage:
const set1 = new Set([1, 2, 3, 4]);
const set2 = new Set([3, 4, 5, 6]);
console.log(intersection(set1, set2));  // Output: Set {3, 4}