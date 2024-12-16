#include <iostream>
#include <cmath>
#include <complex>

double iterativeSquareRoot(double a, double tolerance)
{
    double x = a;
    double xNext;
    while (true) {
        xNext = 0.5 * (x + a / x);
        if (std::abs(xNext - x) < tolerance) {
            return xNext;
        }
        x = xNext;
    }
}

std::complex<double> complexIterativeSquareRoot(double a) {
    if (a >= 0) {
        return iterativeSquareRoot(a, 1e-5);
    }
    else {
        double b = -a;
        double realPart = iterativeSquareRoot(b, 1e-5);
        return std::complex<double>(0, realPart);
    }
}

int main() 
{
    double num;
    std::cout << "请输入一个数: ";
    std::cin >> num;

    if (num < 0) {
        std::complex<double> result = complexIterativeSquareRoot(num);
        std::cout << "复数平方根为: " << result << std::endl;
    }
    else {
        double result = iterativeSquareRoot(num, 1e-5);
        std::cout << "平方根为: " << result << std::endl;
    }

    return 0;
}