#include <iostream>
using namespace std;

int main() {
    int A, B;
    std::cin >> A >> B;

    if (A < B)
        std::cout << 1 << " ";
    else
        std::cout << 0 << " ";
    
    if (A == B)
        std::cout << 1;
    else
        std::cout << 0;

    return 0;
}