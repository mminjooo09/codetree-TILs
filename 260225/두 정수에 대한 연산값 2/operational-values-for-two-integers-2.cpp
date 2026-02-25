#include <iostream>
using namespace std;

void Operation(int &a, int &b) {
    if (a>b) {
        a *= 2;
        b += 10;
    }
    else {
        b *= 2;
        a += 10;
    }
}

int main() {
    int a, b;
    std::cin >> a >> b;

    Operation(a, b);

    std::cout << a << " " << b;

    return 0;
}