#include <iostream>
using namespace std;

int main() {
    double a;
    std::cin >> a;

    std::cout << fixed;
    std::cout.precision(1);

    std::cout << a*30.48;
    
    return 0;
}