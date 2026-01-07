#include <iostream>
using namespace std;

int main() {
    double a, b;
    char c;
    std::cin >> c >> a >> b;
    
    std::cout << fixed;
    std::cout.precision(2);

    std::cout << c << endl << a << endl << b;

    return 0;
}