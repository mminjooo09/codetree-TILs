#include <iostream>
using namespace std;

int main() {
    char C;
    std::cin >> C;

    if (C == 'S')
        std::cout << "Superior";
    else if (C == 'A')
        std::cout << "Excellent";
    else if (C == 'B')
        std::cout << "Good";
    else if (C == 'C')
        std::cout << "Usually";
    else if (C == 'D')
        std::cout << "Effort";
    else
        std::cout << "Failure";

    return 0;
}