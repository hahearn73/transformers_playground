import Foundation  // For sqrt

struct Point3D {
    var x: Double
    var y: Double
    var z: Double
}

func distanceBetween(point1: Point3D, point2: Point3D) -> Double {
    return sqrt(pow(point2.x - point1.x, 2) + pow(point2.y - point1.y, 2) + pow(point2.z - point1.z, 2))
}

// Example usage
let pointA = Point3D(x: 1, y: 2, z: 3)
let pointB = Point3D(x: 4, y: 5, z: 6)
let distance = distanceBetween(point1: pointA, point2: pointB)

print(distance)