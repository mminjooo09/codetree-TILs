#include <iostream>
using namespace std;

int main() {
    int a = 13;
    double b = 0.165;

    std::cout << fixed;
    std::cout.precision(6);

    std::cout << a << " * " << b << " = " << a*b;

    return 0;
}