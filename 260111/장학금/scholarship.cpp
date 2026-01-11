#include <iostream>
using namespace std;

int main() {
    int a, b;
    std::cin >> a >> b;

    if (a<90)
        std::cout << 0;
    else if (b>=95)
        std::cout << 100000;
    else if (b>=90)
        std::cout << 50000;
    else
        std::cout << 0;
    
    return 0;
}