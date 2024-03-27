public class DistanceCalculator {

    public static void main(String[] args) {
        Point3D point1 = new Point3D(1.0, 2.0, 3.0);
        Point3D point2 = new Point3D(4.0, 5.0, 6.0);
        
        double distance = calculateDistance(point1, point2);
        
        System.out.println("Distance: " + distance);
    }
    
    public static double calculateDistance(Point3D point1, Point3D point2) {
        return Math.sqrt(Math.pow(point2.x - point1.x, 2) + 
                         Math.pow(point2.y - point1.y, 2) + 
                         Math.pow(point2.z - point1.z, 2));
    }
}

class Point3D {
    public double x, y, z;
    
    public Point3D(double x, double y, double z) {
        this.x = x;
        this.y = y;
        this.z = z;
    }
}