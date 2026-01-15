#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    std::cin >> A >> B >> C;

    if (A>B) {
        if (B>C)
            std::cout << B;
        else if (A>C)
            std::cout << C;
        else
            std::cout << A;
    }
    else {
        if (C>B)
            std::cout << B;
        else if (C>A)
            std::cout << C;
        else
            std::cout << A;
    }

    return 0;
}