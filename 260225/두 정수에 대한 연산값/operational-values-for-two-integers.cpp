#include <iostream>
using namespace std;

void Operation(int &a, int &b) {
    if (a>b) {
        a += 25;
        b *= 2;
    }
    else {
        b += 25;
        a *= 2;
    }
}

int main() {
    int a, b;
    std::cin >> a >> b;

    Operation(a, b);

    std::cout << a << " " << b;

    return 0;
}