import kotlin.math.PI

fun main() {
    val circle = Circle(5.0)
    val rectangle = Rectangle(5.0, 10.0)

    println("Circle area: ${calculateArea(circle)}")
    println("Rectangle area: ${calculateArea(rectangle)}")
}

interface Shape {
    fun area(): Double
}

class Circle(private val radius: Double) : Shape {
    override fun area(): Double = PI * radius * radius
}

class Rectangle(private val length: Double, private val width: Double) : Shape {
    override fun area(): Double = length * width
}

fun calculateArea(shape: Shape) = shape.area()