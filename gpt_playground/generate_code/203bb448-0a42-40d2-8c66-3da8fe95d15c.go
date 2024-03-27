package main

import (
    "fmt"
    "math"
)

type Point3D struct {
    X, Y, Z float64
}

func Distance(p1, p2 Point3D) float64 {
    return math.Sqrt(
        math.Pow(p2.X-p1.X, 2) +
            math.Pow(p2.Y-p1.Y, 2) +
            math.Pow(p2.Z-p1.Z, 2))
}

func main() {
    point1 := Point3D{X: 1, Y: 2, Z: 3}
    point2 := Point3D{X: 4, Y: 5, Z: 6}
    distance := Distance(point1, point2)
    fmt.Printf("Distance: %f\n", distance)
}