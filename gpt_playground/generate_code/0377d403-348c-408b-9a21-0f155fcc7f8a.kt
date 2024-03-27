data class Point3D(val x: Double, val y: Double, val z: Double)

fun distanceBetweenPoints3D(point1: Point3D, point2: Point3D): Double {
    return Math.sqrt(
        Math.pow(point2.x - point1.x, 2.0) +
        Math.pow(point2.y - point1.y, 2.0) +
        Math.pow(point2.z - point1.z, 2.0)
    )
}