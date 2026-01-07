#include <iostream>
using namespace std;

int main() {
    int a, b;
    std::cin >> a >> b;

    a += 87;
    b %= 10;

    std::cout << a << endl << b;
    
    return 0;
}