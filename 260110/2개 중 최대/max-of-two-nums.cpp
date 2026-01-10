#include <iostream>
using namespace std;

int main() {
    int A, B, n;
    std::cin >> A >> B;

    n = A >= B ? A : B;

    std::cout << n;
    
    return 0;
}