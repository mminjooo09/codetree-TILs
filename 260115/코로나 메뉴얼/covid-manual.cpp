#include <iostream>
using namespace std;

int main() {
    char a1, a2, a3;
    int b1, b2, b3;
    std::cin >> a1 >> b1 >> a2 >> b2 >> a3 >> b3;

    if (a1=='Y' && b1 >= 37) {
        if ((a2=='Y' && b2 >= 37) || (a3=='Y' && b3 >= 37))
            std::cout << 'E';
        else
            std::cout << 'N';
    }
    else {
        if ((a2=='Y' && b2 >= 37) && (a3=='Y' && b3 >= 37))
            std::cout << 'E';
        else
            std::cout << 'N';
    }

    return 0;
}