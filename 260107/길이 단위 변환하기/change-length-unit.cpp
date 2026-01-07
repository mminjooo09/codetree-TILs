#include <iostream>
using namespace std;

int main() {
    double a = 9.2, b = 1.3;

    std::cout << fixed;
    std::cout.precision(1);

    std::cout << a << "ft = " << a*30.48 << "cm" << endl;
    std::cout << b << "mi = " << b*160934 << "cm";

    return 0;
}