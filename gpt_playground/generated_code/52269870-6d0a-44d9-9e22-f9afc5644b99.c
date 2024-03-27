#include <math.h>

typedef struct {
    double x;
    double y;
    double z;
} Point3D;

double distanceBetweenPoints3D(Point3D a, Point3D b) {
    return sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2) + pow(b.z - a.z, 2));
}