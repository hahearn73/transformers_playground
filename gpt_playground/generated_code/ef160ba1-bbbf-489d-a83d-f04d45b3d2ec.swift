import Foundation

// Define a protocol for shape
protocol Shape {
    func area() -> Double
}

// Define a class for Circle which implements Shape
class Circle: Shape {
    var radius: Double
    
    init(radius: Double) {
        self.radius = radius
    }
    
    func area() -> Double {
        return Double.pi * pow(radius, 2)
    }
}

// Define a class for Rectangle which implements Shape
class Rectangle: Shape {
    var length: Double
    var width: Double
    
    init(length: Double, width: Double) {
        self.length = length
        self.width = width
    }
    
    func area() -> Double {
        return length * width
    }
}


// Example Usage
let circle = Circle(radius: 5)
print("Area of the circle: \(circle.area())")

let rectangle = Rectangle(length: 10, width: 5)
print("Area of the rectangle: \(rectangle.area())")