#include <iostream>
using namespace std;

int main() {
    int A, B;
    int rlt = 1;
    std::cin >> A >> B;

    for (int i=A; i<=B; i++) {
        rlt *= i;
    }

    std::cout << rlt;

    return 0;
}