#include <iostream>
using namespace std;

int main() {
    int n;
    std::cin >> n;

    if (n == 2)
        std::cout << 28;
    else if (n <= 7)
        if (n % 2 == 0)
            std::cout << 30;
        else
            std::cout << 31;
    else
        if (n % 2 == 0)
            std::cout << 31;
        else
            std::cout << 30;
        
    return 0;
}