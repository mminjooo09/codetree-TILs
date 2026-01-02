#include <iostream>
using namespace std;

int main() {
    int N;

    std::cin >> N;
    std::cout << N;

    if (N <= 0) {
        std::cout << "\nminus";
    }

    return 0;
}