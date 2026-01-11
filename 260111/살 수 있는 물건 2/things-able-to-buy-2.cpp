#include <iostream>
using namespace std;

int main() {
    int N;
    std::cin >> N;

    if (N >= 3000)
        std::cout << "book";
    else if (N >= 1000)
        std::cout << "mask";
    else if (N >= 500)
        std::cout << "pen";
    else
        std::cout << "no";

    return 0;
}