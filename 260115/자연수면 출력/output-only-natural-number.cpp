#include <iostream>
using namespace std;

int main() {
    int A, B;
    std::cin >> A >> B;

    if (A>0) {
        for (int i=0; i<B; i++) {
            std::cout << A;
        }
    }
    else
        std::cout << 0;

    return 0;
}