#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    std::cin >> A >> B;
    C = A % B;

    std::cout << A/B << ".";

    for (int i = 0; i < 20; i++) {
        C *= 10;
        std::cout << C/B;
        C %= B;
    }

    return 0;
}