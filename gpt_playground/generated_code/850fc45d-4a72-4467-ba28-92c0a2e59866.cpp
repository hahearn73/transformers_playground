#include <cmath>

bool isPerfectSquare(int num) {
    int root = sqrt(num);
    return root * root == num;
}