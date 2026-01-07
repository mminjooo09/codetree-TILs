#include <iostream>
using namespace std;

int main() {
    int N;
    std::cin >> N;

    std::cout << N << endl;

    if (N < 0)
        std::cout << "minus";

    return 0;
}