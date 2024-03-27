#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159

enum ShapeType {
    CIRCLE,
    RECTANGLE,
    INVALID
};

typedef struct {
    enum ShapeType type;
    union {
        struct {
            double radius;
        } circle;
        struct {
            double length;
            double width;
        } rectangle;
    } shape;
} Shape;

double calculateArea(Shape shape) {
    switch (shape.type) {
        case CIRCLE:
            return PI * shape.shape.circle.radius * shape.shape.circle.radius;
        case RECTANGLE:
            return shape.shape.rectangle.length * shape.shape.rectangle.width;
        default:
            printf("Invalid shape type\n");
            return 0;
    }
}

int main() {
    Shape circle, rectangle;

    circle.type = CIRCLE;
    circle.shape.circle.radius = 5.0;

    rectangle.type = RECTANGLE;
    rectangle.shape.rectangle.length = 6.0;
    rectangle.shape.rectangle.width = 4.0;

    printf("Area of the circle: %.2f\n", calculateArea(circle));
    printf("Area of the rectangle: %.2f\n", calculateArea(rectangle));

    return 0;
}