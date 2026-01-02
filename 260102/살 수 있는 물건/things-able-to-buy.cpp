#include <iostream>
using namespace std;

int main() {
    int N;
    int book = 3000;
    int mask = 1000;

    std::cin >> N;

    if (N >= 3000) {
        std:cout << "book";
    }
    else if (N >= 1000) {
        std::cout << "mask";
    }
    else {
        std::cout << "no";
    }

    return 0;
}