#include "mytriangle.h"
#include <cmath>

// 判断三条边能否构成三角形的函数定义
bool is_valid(double side1, double side2, double side3) {
    return (side1 + side2 > side3) && (side1 + side3 > side2) && (side2 + side3 > side1);
}

// 计算三角形面积的函数定义
double area(double side1, double side2, double side3) {
    double s = (side1 + side2 + side3) / 2;
    return std::sqrt(s * (s - side1) * (s - side2) * (s - side3));
}
