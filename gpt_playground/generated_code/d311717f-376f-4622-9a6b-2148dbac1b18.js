class ShapeCalculator {
  calculateCircleArea(radius) {
    return Math.PI * Math.pow(radius, 2);
  }

  calculateRectangleArea(length, width) {
    return length * width;
  }

  // Add more shapes as needed
}

// Example usage
const calculator = new ShapeCalculator();
console.log("Circle Area: ", calculator.calculateCircleArea(5));
console.log("Rectangle Area: ", calculator.calculateRectangleArea(10, 5));