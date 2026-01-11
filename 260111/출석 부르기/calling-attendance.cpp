#include <iostream>
using namespace std;

int main() {
    int N;
    std::cin >> N;

    if (N == 1)
        std::cout << "John";
    else if (N == 2)
        std::cout << "Tom";
    else if (N == 3)
        std::cout << "Paul";
    else
        std::cout << "Vacancy";

    return 0;
}