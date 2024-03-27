#include <cmath>

struct Point3D {
    double x, y, z;
};

double distance3D(const Point3D& point1, const Point3D& point2) {
    return sqrt(pow(point2.x - point1.x, 2) + 
                pow(point2.y - point1.y, 2) + 
                pow(point2.z - point1.z, 2));
}

int main() {
    Point3D point1 = {1.0, 2.0, 3.0};
    Point3D point2 = {4.0, 5.0, 6.0};
    
    double dist = distance3D(point1, point2);
    // Assuming there is a way to display `dist` further in the code or debug environment.
    return 0;
}