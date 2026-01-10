#include <iostream>
using namespace std;

int main() {
    int A, B;
    std::cin >> A >> B;

    if (A >= B)
        std::cout << A-B;
    else
        std::cout << B-A;
    
    return 0;
}