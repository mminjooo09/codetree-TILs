#include <iostream>
using namespace std;

int main() {
    double a = 5.26, b = 8.27;

    std::cout << fixed;
    std::cout.precision(3);

    std::cout << a*b;
    
    return 0;
}