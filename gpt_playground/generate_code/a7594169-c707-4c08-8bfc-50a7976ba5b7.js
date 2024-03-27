function calculateDistance3D(point1, point2) {
  // The points should be objects or arrays in the form {x: value, y: value, z: value} or similar
  const dx = point2.x - point1.x;
  const dy = point2.y - point1.y;
  const dz = point2.z - point1.z;

  return Math.sqrt(dx*dx + dy*dy + dz*dz);
}

// Example usage:
// const point1 = { x: 1, y: 2, z: 3 };
// const point2 = { x: 4, y: 5, z: 6 };
// console.log(calculateDistance3D(point1, point2)); // Output should be the distance between point1 and point2 in 3D space.