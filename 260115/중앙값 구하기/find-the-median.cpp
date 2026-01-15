#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    std::cin >> A >> B >> C;

    if (A>B && A>C) {
        if (B>C)
            std::cout << B;
        else
            std::cout << C;
    }
    else if (B>A && B>C) {
        if (A>C)
            std::cout << A;
        else
            std::cout << C;
    }
    else {
        if (A>B)
            std::cout << A;
        else
            std::cout << B;
    }

    return 0;
}