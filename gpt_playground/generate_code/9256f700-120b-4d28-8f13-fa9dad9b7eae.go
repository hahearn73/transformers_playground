package main

import (
	"fmt"
	"math"
)

// Define an interface for common shapes
type Shape interface {
	Area() float64
}

// Define Circle structure
type Circle struct {
	Radius float64
}

// Define Rectangle structure
type Rectangle struct {
	Width, Height float64
}

// Implement Area method for Circle
func (c Circle) Area() float64 {
	return math.Pi * c.Radius * c.Radius
}

// Implement Area method for Rectangle
func (r Rectangle) Area() float64 {
	return r.Width * r.Height
}

func main() {
	// Initialize circle with radius 5
	circle := Circle{Radius: 5}
	// Initialize rectangle with width 4 and height 6
	rectangle := Rectangle{Width: 4, Height: 6}

	// Create slice of shapes
	shapes := []Shape{circle, rectangle}

	// Iterate over shapes and print their area
	for _, shape := range shapes {
		fmt.Printf("The area of the shape is: %.2f\n", shape.Area())
	}
}