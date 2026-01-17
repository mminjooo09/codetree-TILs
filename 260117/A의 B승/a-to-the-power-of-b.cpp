#include <iostream>
using namespace std;

int main() {
    int A, B;
    int rlt = 1;
    std::cin >> A >> B;

    for (int i=1; i<=B; i++) {
        rlt *= A;
    }

    std::cout << rlt;

    return 0;
}