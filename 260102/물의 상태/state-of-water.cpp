#include <iostream>
using namespace std;

int main() {
    int n;

    std::cin >> n;

    if (n < 0) {
        std::cout << "ice";
    }
    else if (n >= 100) {
        std::cout << "vapor";
    }
    else {
        std::cout << "water";
    }
    
    return 0;
}