#include <iostream>
using namespace std;

int main() {
    int a, b;
    std::cin >> a >> b;
    
    double c;
    c = (double)(a+b) / (double)(a-b);
    
    std::cout << fixed;
    std::cout.precision(2);
    std::cout << c;
    
    return 0;
}