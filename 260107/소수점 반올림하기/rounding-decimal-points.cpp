#include <iostream>
using namespace std;

int main() {
    double a = 25.352;

    std::cout << fixed;
    std::cout.precision(1);

    std::cout << a;
    
    return 0;
}