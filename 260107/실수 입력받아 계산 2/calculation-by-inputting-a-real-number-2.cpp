#include <iostream>
using namespace std;

int main() {
    double a;
    std::cin >> a;

    std::cout << fixed;
    std::cout.precision(2);

    std::cout << a + 1.5;
    
    return 0;
}