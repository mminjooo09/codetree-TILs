#include <iostream>
using namespace std;

int main() {
    int A, B;
    int total = 0;

    std::cin >> A >> B;

    for (int i = A; i <= B; i++) {
        if (i%2 == 0) {
            total += i;
        }
    }

    std::cout << total;

    return 0;
}