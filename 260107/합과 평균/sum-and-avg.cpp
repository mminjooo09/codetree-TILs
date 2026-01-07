#include <iostream>
using namespace std;

int main() {
    int A, B;
    std::cin >> A >> B;

    std::cout << fixed;
    std::cout.precision(1);
    std::cout << A+B << " " << (double)(A+B)/2;

    return 0;
}