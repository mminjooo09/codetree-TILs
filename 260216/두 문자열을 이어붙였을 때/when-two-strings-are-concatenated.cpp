#include <iostream>
using namespace std;

int main() {
    string A, B, C, D;
    std::cin >> A >> B;

    C = A + B;
    D = B + A;

    if (C == D)
        std::cout << "true";
    else
        std::cout << "false";

    return 0;
}