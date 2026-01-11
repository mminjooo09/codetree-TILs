#include <iostream>
using namespace std;

int main() {
    double a;
    std::cin >> a;

    if (a >= 1.0)
        std::cout << "High";
    else if (a >= 0.5)
        std::cout << "Middle";
    else
        std::cout << "Low";
    
    return 0;
}