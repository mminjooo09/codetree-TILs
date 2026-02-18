#include <iostream>
#include <string>
using namespace std;

int main() {
    char a, b;
    string A, B;
    std::cin >> A >> B;

    a = A[0];
    b = A[1];
    B[0] = a;
    B[1] = b;

    std::cout << B;

    return 0;
}